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
    int n, s; cin >> n >> s;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    int _min = min(abs(s - vec[0]), abs(s - vec[n - 1])) + vec[n - 1] - vec[0];
    cout << _min << endl;
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 

