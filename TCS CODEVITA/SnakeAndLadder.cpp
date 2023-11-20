#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const ll MOD = 1e9+7;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)
 
vector<string> convertVector(string str) {
    vector<string> ans;
    string s;
    stringstream ss(str);
 
    while (getline(ss, s, ' ')) {
        ans.push_back(s);
    }
    return ans;
}
 
int main() {
 
    vector<string> arr;
    string temp;
    while (getline(cin, temp)) {
        if (temp == "")
            continue;
        arr.push_back(temp);
    }
 
    string dice = arr[10];
 
    arr.pop_back();
    reverse(arr.begin(), arr.end());
 
    vector<vector<string>> board;
    for (int i = 0; i < 10; i++) {
        vector<string> input = convertVector(arr[i]);
        if (i % 2 == 0)
            board.push_back(input);
        else {
            reverse(input.begin(), input.end());
            board.push_back(input);
        }
    }
 
    vector<vector<int>> final_board(10, vector<int>(10, 0));
 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (board[i][j] == "Start")
                continue;
            else if (board[i][j] == "End")
                final_board[i][j] = 99;
            else if (board[i][j][0] == 'S' || board[i][j][0] == 'L') {
                string str = board[i][j];
                str.pop_back();
                str = str.substr(2);
                if (str == "Start")
                    str = "1";
                else if (str == "End")
                    str = "100";
                final_board[i][j] = stoi(str) - 1;
            } else
                final_board[i][j] = stoi(board[i][j]) - 1;
        }
    }
 
    vector<int> moves;
    vector<string> dices = convertVector(dice);
    for (auto i : dices)
        moves.push_back(stoi(i));
 
    int snakes = 0, ladders = 0;
    int pos = -1;  
    for (auto move : moves) {
        if (pos != 0) {
            if (final_board[pos / 10][pos % 10] < pos)
                snakes++;
            else if (final_board[pos / 10][pos % 10] > pos)
                ladders++;
        }
        pos = final_board[pos / 10][pos % 10];  
        pos += move;  
        if (pos >= 99) {
            pos = 99;  
            break;
        }
    }
 
    if (pos != 99)
        cout << "Not possible " << snakes << " " << ladders << " " << pos + 1 << " ";
    else
        cout << "Possible " << snakes + 1  << " " << ladders + 1 << " ";
 
    return 0;
}