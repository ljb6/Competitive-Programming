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
    vector<string> vec(3);
    for (int i=0; i<3; i++) cin >> vec[i];

    bool possible = true;
    for (int i=0; i<vec[0].length(); i++) {
        if (vec[2][i] != vec[0][i] && vec[2][i] != vec[1][i])
            possible = false;
    }
    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() { _
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

