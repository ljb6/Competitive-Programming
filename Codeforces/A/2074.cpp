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
    bool ok = true;
    int last; cin >> last;
    for (int i = 0; i < 3; i++) {
        int num; cin >> num;
        if (num != last) ok = false;
    }

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

