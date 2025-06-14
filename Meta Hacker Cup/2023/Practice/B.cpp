#include <bits/stdc++.h>
#include <cstdio>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

void solve() {
    ll r, c; cin >> r >> c;
    int a, b; cin >> a >> b;
    if (r > c) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() { _

    freopen("input.txt", "r", stdin);

    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": "; 
        solve();
    }
    return 0;
}

