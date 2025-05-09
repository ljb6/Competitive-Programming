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
    int n; cin >> n;
    int a = 0, b = 0;
    for (int i = 1; i <= n; i++) {
        if (i == n || i < n/2) b += pow(2, i);
        else a += pow(2, i);
    }
    cout << abs(a - b) << endl;
}

int main() { _
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

