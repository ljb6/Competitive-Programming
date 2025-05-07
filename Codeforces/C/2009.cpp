#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x, y, k; cin >> x >> y >> k;

    int res = 0;

    if (x % k != 0) x += k - x % k;
    if (y %k != 0) y += k - y % k;

    if (y/k >= x/k) {
        res += ((x/k) * 2) + (2 * (y/k - x/k));
    } else {
        res += ((y/k) * 2) + (2 * (x/k - y/k) - 1);
    }

    cout << res << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
