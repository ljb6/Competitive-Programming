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
    string s; cin >> s;

    if (s[0] == 'a') cout << "YES" << endl;
    else {
        if (s[2] == 'a' && s[1] == 'b') cout << "YES" << endl;
        else if (s[1] == 'a' && s[2] == 'c') cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

