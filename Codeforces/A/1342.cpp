#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

void solve() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    
    ll s;
    if (a * 2 < b) {
        s = a * (x + y);
    } else {
        s = min(x, y) * b + (max(x, y) - min(x, y)) * a;
    }
    cout << s << endl;
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

