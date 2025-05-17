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
    string p, s; cin >> p >> s;
    
    vector<pair<int, char>> p1;
    vector<pair<int, char>> p2;

    char starter = p[0];
    int sum = 1;
    for (int i = 1; i <= p.length(); i++) {
        if (p[i] != starter) {
            p1.push_back({sum, starter});
            sum = 1;
            starter = p[i];
        } else {
            sum++;
        }
    }

    starter = s[0];
    sum = 1;
    for (int i = 1; i <= s.length(); i++) {
        if (s[i] != starter) {
            p2.push_back({sum, starter});
            sum = 1;
            starter = s[i];
        } else {
            sum++;
        }
    }

    bool possible = true;

    if (p1.size() != p2.size()) {
        possible = false;
    } else {
        for (int i = 0; i < p1.size(); i++) {
            if (p2[i].f < p1[i].f || p2[i].f > 2 * p1[i].f || p1[i].s != p2[i].s) {
                possible = false;
                break;
            }
        } 
    }

    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() { _
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

