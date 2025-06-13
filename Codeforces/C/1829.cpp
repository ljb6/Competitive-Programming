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

    int s1 = INF, s2 = INF, s3 = INF;
    for (int i = 0; i < n; i++) {
        int m, s; cin >> m >> s;
        if (s == 10 && m < s1) s1 = m;
        else if (s == 01 && m < s2) s2 = m;
        else if (s == 11 && m < s3) s3 = m;
    }
    
    if (s3 == INF && (s1 == INF || s2 == INF)) cout << -1 << endl;
    else cout << min((s1 + s2), s3) << endl;
}

int main() { _
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

