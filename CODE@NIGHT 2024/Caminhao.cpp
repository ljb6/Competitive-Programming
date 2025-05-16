#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;

using namespace std;

struct Aresta {
    int a, b, peso;
    bool operator<(const Aresta& other) const {
        return peso > other.peso;
    }
};

vector<int> pai, tam;

int findPai(int x) {
    if (pai[x] == x) return x;
    return pai[x] = findPai(pai[x]);
}

void unite(int a, int b) {
    a = findPai(a);
    b = findPai(b);
    if (a == b) return;
    if (tam[a] < tam[b]) swap(a, b);
    pai[b] = a;
    tam[a] += tam[b];
}

int main() { _

    int n, m, s; cin >> n >> m >> s;

    pai.resize(n + 1);
    tam.resize(n + 1, 1);

    vector<Aresta> pontes(m);
    vector<pair<int, int>> sedes(s);

    for (int i = 0; i < m; i++)
        cin >> pontes[i].a >> pontes[i].b >> pontes[i].peso;

    for (int i = 0; i < s; i++)
        cin >> sedes[i].first >> sedes[i].second;
    
    sort(pontes.begin(), pontes.end()); 

    for (auto& sede : sedes) {

        for (int i = 1; i <= n; i++) {
            pai[i] = i;
            tam[i] = 1;
        }

        int res = 0;
        for (auto& p : pontes) {
            unite(p.a, p.b);
            if (findPai(sede.first) == findPai(sede.second)) {
                res = p.peso;
                break;
            }
        }
        cout << res << endl;
    }

    return 0;
}

