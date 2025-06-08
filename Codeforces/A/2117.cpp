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
    int n, x; cin >> n >> x;

    int openTime = 0; bool used = false, valid = true;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;

        if (a == 1 && openTime == 0) used = true;

        if (openTime >= x && a == 1) valid = false;
        
        if (used) openTime++;
    }

    if (valid) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0; 
}

