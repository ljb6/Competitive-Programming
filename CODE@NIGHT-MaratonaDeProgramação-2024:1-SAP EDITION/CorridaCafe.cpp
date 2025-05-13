#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _

    int pessoas, cc; cin >> pessoas >> cc;
    
    // posicoes 
    vector<pair<int, int>> vec;

    for (int i = 0; i < pessoas; i++) {
        pair<int, int> p;
        cin >> p.f >> p.s;
        vec.push_back(p);
    }

    // pessoas e distancia
    pair<int, int> res = {1, INF};

    // testa cada corner pra cada pessoa
    for (int i = 0; i < cc; i++) {
        int ccx, ccy; cin >> ccx >> ccy;
        for (int j = 0; j < pessoas; j++) {
            int distancia = abs(ccx - vec[j].f) + abs(ccy - vec[j].s);
            if (distancia < res.s) {
                res.f = j; res.s = distancia;
            }
        }
    }

    cout << res.f + 1 << endl;
    
    return 0;
}

