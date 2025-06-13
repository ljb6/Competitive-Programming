#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

string cf = "codeforces";

void solve() {
    string s; cin >> s;
    int res = 0;
    for (int i = 0; i <= 10; i++) {
        if (s[i] != cf[i]) res++;
    }
    cout << res << endl;
} 

// 1829
int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

