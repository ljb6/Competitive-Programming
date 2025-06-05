#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int main() { _
    // tá chinelo
    string cartas; cin >> cartas;

    vector<char> naipes = {'C', 'E', 'U', 'P'};
    map<char, vector<int>> mp = {{'C', {}}, {'E', {}}, {'U', {}}, {'P', {}}};
    map<char, bool> valid = {{'C', true}, {'E', true}, {'U', true}, {'P', true}};

    for (int i = 0; i < cartas.length(); i+=3) {

        string s = ""; s += cartas[i]; s += cartas[i+1];
        int num = stoi(s);
        
        auto it (find(mp[cartas[i+2]].begin(), mp[cartas[i+2]].end(), num));    
        if (it != mp[cartas[i+2]].end()) {
            valid[cartas[i+2]] = false;
        } else {
            mp[cartas[i+2]].push_back(num);
        }
    }

    for (auto naipe : naipes) {
        if (!valid[naipe]) {
            cout << "error" << endl;
        } else {
            cout << 13 - mp[naipe].size() << endl;
        }
    }

    return 0;
}

