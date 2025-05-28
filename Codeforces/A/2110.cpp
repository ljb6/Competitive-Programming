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
    vector<int> v;


    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    if ((v[0] + v[n - 1]) % 2 == 0) cout << 0 << endl;
    else if (n == 2 && (v[0] + v[1]) % 2 != 0) cout << 1 << endl;
    else {

        bool fp = v[0] % 2 == 0;
        bool lp = v[n - 1] % 2 == 0;

        int ff = INF;
        for (int i = 1; i < n; i++) {
            if ((v[i] % 2 != 0 && fp) || (v[i] % 2 == 0 && !fp)) {
                ff = i; break;
            }
        }

        int fl = INF;
        for (int i = n - 1; i >= 0; i--) {
            if ((v[i] % 2 != 0 && lp) || (v[i] % 2 == 0 && !lp)) {
                fl = i; break;
            }
        }
    
        
        cout <<  min(ff, (n - 1 - fl)) << endl; 
    }
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

