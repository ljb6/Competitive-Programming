#include <iostream>

using namespace std;

#define ll long long

void solve() {
   int k; cin >> k;
   if (k % 2 == 0) cout << "NO\n";
   else cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin >> tc;
    for (int t=1; t<=tc; t++) {
        //cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
 

