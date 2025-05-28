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

    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            counter++;
            i += k - 1;
        }
    }
    cout << counter << endl;
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

