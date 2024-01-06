#include <iostream>
#include <vector>
#include <queue>
int n;
using namespace std;

struct Switch {
  int light;
  int other;
};

bool isPossible(int n, vector<char>& lights, const vector<Switch>& switches) {
  queue<int> q;
  vector<bool> visited(n, false);

  for (int i = 0; i < n; ++i) {
    if (lights[i] == '1') {
      q.push(i);
      visited[i] = true;
    }
  }

  while (!q.empty()) {
    int light = q.front();
    q.pop();

    for (const Switch& s : switches) {
      if (s.light == light && !visited[s.other]) {
        lights[s.other] = (lights[s.other] == '1') ? '0' : '1';
        q.push(s.other);
        visited[s.other] = true;
      }
    }
  }

  for (char light : lights) {
    if (light == '1') {
      return false;
    }
  }

  return true;
}

void backtrack(int curr_switches, int switch_index, vector<char>& lights, const vector<Switch>& switches) {
  if (curr_switches >= n) {
    return;
  }

  if (isPossible(n, lights, switches)) {
    n = curr_switches;
    return;
  }

  for (int i = switch_index; i < n; ++i) {
    flipLight(i, lights, switches);
    backtrack(curr_switches + 1, i + 1, lights, switches);
    flipLight(i, lights, switches);
  }
}

void flipLight(int light_index, vector<char>& lights, const vector<Switch>& switches) {
  lights[light_index] = (lights[light_index] == '1') ? '0' : '1';
  for (const Switch& s : switches) {
    if (s.light == light_index) {
      lights[s.other] = (lights[s.other] == '1') ? '0' : '1';
    }
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    cin >> n;

    vector<char> lights(n);
    for (int i = 0; i < n; ++i) {
      cin >> lights[i];
    }

    vector<Switch> switches(n);
    for (int i = 0; i < n; ++i) {
      cin >> switches[i].other;
      switches[i].light = i;
    }

    if (!isPossible(n, lights, switches)) {
      cout << -1 << endl;
      continue;
    }

    int min_switches = n;

    backtrack(0, 0, lights, switches);

    cout << min_switches << endl;
  }

  return 0;
}
