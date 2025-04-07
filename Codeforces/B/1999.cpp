#include <iostream>
#include <ostream>

using namespace std;

#define ll long long

int check(int a, int b) {
    if (a > b) return 1;
    if (b > a) return -1;
    if (a == b) return 0;
}

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int won = 0;
    if ((check(a1, b1) + check(a2, b2)) > 0) won++;
    if ((check(a1, b2) + check(a2, b1)) > 0) won++;
    if ((check(a2, b1) + check(a1, b2)) > 0) won++;
    if ((check(a2, b2) + check(a1, b1)) > 0) won++;
    cout << won << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin >> tc;
    for (int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
 

