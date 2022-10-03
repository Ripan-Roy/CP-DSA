#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory has been free for node with data: " << value << endl;
    }
};

void insertAtHead(node *&head, int data)
{
    // new node create
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertRandom(node *&head, node *&tail, int data, int pos)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    node *newNode = new node(data);
    temp->next = newNode;
}
void deleteAtHead(node *&head)
{
    node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

void deleteAtMiddle(node *&head, node *&tail, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *curr = head;
    node *prev = NULL;
    int count = 1;
    while (count < pos)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    int cnt = 1;
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    tail = temp;
    delete curr;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(20);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    node *head = node1;
    node *tail = node1;
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);

    insertRandom(head, tail, 22, 4);
    print(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    deleteAtMiddle(head, tail, 2);
    print(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    return 0;
}
