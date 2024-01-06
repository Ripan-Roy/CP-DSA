import torch
import torch.nn as nn
import torch.optim as optim
import copy

# Define the model architecture
class MusicPreferencesModel(nn.Module):
    def __init__(self, num_genres):
        super(MusicPreferencesModel, self).__init__()
        self.embedding = nn.Embedding(num_genres, 16)
        self.flatten = nn.Flatten()
        self.fc1 = nn.Linear(16, 128)
        self.fc2 = nn.Linear(128, num_genres)

    def forward(self, x):
        x = self.embedding(x)
        x = self.flatten(x)
        x = torch.relu(self.fc1(x))
        x = self.fc2(x)
        return torch.softmax(x, dim=1)

# Function to perform federated training on a client
def federated_train_on_client(model, data, lr=0.01, num_epochs=1):
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.SGD(model.parameters(), lr=lr)

    for epoch in range(num_epochs):
        optimizer.zero_grad()
        outputs = model(data['input'])
        loss = criterion(outputs, data['label'])
        loss.backward()
        optimizer.step()

    return copy.deepcopy(model.state_dict())

# Federated learning setup
num_genres = len(music_genres)
global_model = MusicPreferencesModel(num_genres)
global_optimizer = optim.SGD(global_model.parameters(), lr=0.01)

# Sample data (you need to adapt this part based on your actual federated learning setup)
client_data = [{'input': torch.tensor([music_genres.index('acoustic'), music_genres.index('alternative'), music_genres.index('ambient')]),
                'label': torch.tensor([0])},  # Assuming single-label classification for simplicity
               # Add more clients' data here
               ]

# Federated training loop
num_rounds = 5
for round in range(num_rounds):
    # Send global model to clients
    local_models = []
    for client in client_data:
        local_model = MusicPreferencesModel(num_genres)
        local_model.load_state_dict(copy.deepcopy(global_model.state_dict()))
        local_models.append(local_model)

    # Perform federated training on clients
    for i in range(len(client_data)):
        client_data[i]['model'] = local_models[i]

    updated_models = [federated_train_on_client(client['model'], client, lr=0.01, num_epochs=1) for client in client_data]

    # Aggregate model updates on the server
    with torch.no_grad():
        for param, param_updates in zip(global_model.parameters(), zip(*[model.values() for model in updated_models])):
            param_updates = torch.stack(param_updates)
            mean_param = torch.mean(param_updates, dim=0)
            param.copy_(mean_param)

# Now, global_model contains the federated learning model updated over multiple rounds.
