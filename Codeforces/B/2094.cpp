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
    int n, m, l, r; cin >> n >> m >> l >> r;
    // -2 -1 0 1 2
    // n = length
    // m = at infected day
    // [-1, 1]
    
    vector<int> vec(n+1);
    int pos0 = 0;

    for (int i = 0; i < n + 1; i++) {
        if (l == 0) pos0 = i;
        vec[i] = l;
        l++;
    }

    l = pos0; r = pos0;
    
    if (m == n) cout << vec[0] << " " << vec[n] << endl;
    else {
        int c = 0, right = 0, left = 0; 
        while (c < m) {
            if ((r + 1) < (n)) {
                r++;
                right = vec[r];
            } else {
                l--;
                left = vec[l];
            }
            c++;
        }
        cout << left << " " << right << endl;
    }
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

