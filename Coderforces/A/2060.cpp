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
    vector<int> vec(5);

    cin >> vec[0];
    cin >> vec[1];
    cin >> vec[3];
    cin >> vec[4];

    vector<int> vec2 = {vec[0] + vec[1], vec[3] - vec[1], vec[4] - vec[3]};

    int best = 0;
    for (int p : vec2) {
        int c = 0;
        vec[2] = p;
        for (int i = 0; i <= 2; i++) {
            if ((vec[i] + vec[i+1]) == vec[i+2]) c++;
        }
        best = max(c, best);
    }
    cout << best << endl;
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

