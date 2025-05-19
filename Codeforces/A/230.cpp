#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _
    int s, n; cin >> s >> n;

    vector<pair<int, int>> d(n);

    for (int i = 0; i < n; i++) {
        cin >> d[i].f >> d[i].s;
    }

    sort(d.begin(), d.end());

    bool won = true;
    for (auto drag : d) {
        if (s > drag.f) {
            s += drag.s;
        } else {
            won = false;
            break;
        }
    }

    if (won) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;    
}

