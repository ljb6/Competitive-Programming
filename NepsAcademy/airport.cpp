#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

void solve(int a, int v, int t) {
    vector<int> vec(a + 1, 0);
    for (int i = 0; i < v; i++) {
        int x, y; cin >> x >> y;
        vec[x]++; vec[y]++;
    }

    int _max = 0;
    for (int i = 1; i < v + 1; i++)
        _max = max(_max, vec[i]);

    cout << "Teste " << t << endl; 
    for (int i = 1; i < v + 1; i++) {
        if (vec[i] == _max) {
            cout << i << " ";
        }
    }
    cout << endl << endl;
}

int main() { _
    int t = 1;
    while (true) {
        int a, v; cin >> a >> v;
        if (a == 0 && v == 0) break;
        solve(a, v, t);
        t++;
    }
    return 0;
}

