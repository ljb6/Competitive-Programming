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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') c0++;
        else c1++;
    }

    int badPairs = n/2 - k;

    if (c0 < badPairs || c1 < badPairs) {
        cout << "NO" << endl;
    } else {
        if (((c0 - ((n / 2)-k)) / 2) + ((c1 - ((n / 2)-k)) / 2) >= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}

int main() { _
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}

