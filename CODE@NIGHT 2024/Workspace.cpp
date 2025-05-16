#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

struct Aresta {
    int a, b, custo;
    bool operator<(const Aresta& other) const {
        return custo < other.custo;
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

    int n, m; cin >> n >> m;

    pai.resize(n + 1);
    tam.resize(n + 1, 1);

    vector<Aresta> corredores;

    for (int i = 0; i < m; i++)
        cin >> corredores[i].a >> corredores[i].b >> corredores[i].custo;
    

    sort(corredores.begin(), corredores.end()); 

    for (int i = 1; i <= n; i++) pai[i] = i;

    int total = 0;
    for (auto& e : corredores) {
        if (findPai(e.a) != findPai(e.b)) {
            unite(e.a, e.b);
            total += e.custo;
        }
    }

    cout << total << endl;

    return 0;
}

