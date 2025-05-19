#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int MAX = 1e3+10;

using namespace std;

// Maratona UFMG - aula 5

vector<vector<int>> g(MAX);
vector<bool> visitado(MAX);

void dfs(int v) {
    visitado[v] = true;

    for (auto w : g[v]) {
        if(!visitado[w]) {
            dfs(w);
        }
    }
}


int main() { _

    int n, m; cin >> n >> m;

    for (int k = 0; k < m; k++) {
        int i, j; cin >> i >> j;
        i--; j--;
        g[i].push_back(j);
        g[j].push_back(i);
    }

    int times = 0;
    for (int i = 0; i < n; i++) {
        if (!visitado[i]) {
            dfs(i);
            times++;
        }
    }

    cout << times << endl;

    return 0;
}

