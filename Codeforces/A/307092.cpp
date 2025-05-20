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
    int n, m; cin >> n >> m;

    vector<int> v1(n), v2(m);

    for (int i = 0; i < n; i++) cin >> v1[i];
    for (int i = 0; i < m; i++) cin >> v2[i];

    int c1 = 0, c2 = 0;
    while (c1 < n || c2 < m) {
        if (c1 == n) {
            cout << v2[c2] << " "; c2++;
        } else if (c2 == m) {
            cout << v1[c1] << " "; c1++;
        } else {
            if (v1[c1] <= v2[c2]) {
                cout << v1[c1] << " "; c1++;
            } else {
                cout << v2[c2] << " "; c2++;
            }
        }
    }

    return 0;
}

