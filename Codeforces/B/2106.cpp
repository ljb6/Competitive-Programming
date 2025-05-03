#include <iostream>
#include <string>

using namespace std;

void solve() {
    long long n, x, i;
    cin >> n >> x;
    if (n == x) {
        for (int i=0; i<n; i++) {
            cout << i << " "; 
        }
    } else {
        for (int i=0; i<n; i++) {
            if (i!=x) cout << i << " ";
        }
        cout << x;
    }
    cout << "\n";
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
