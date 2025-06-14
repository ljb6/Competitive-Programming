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
    int s, d, k; cin >> s >> d >> k;

    int b = (s + d) * 2;
    int p = s + 2 * d;
    int c = s + 2 * d;

    if (b >= (k + 1) && p >= k && c >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() { _
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}

