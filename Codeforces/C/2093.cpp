#include <cmath>
#include <iostream>
#include <pthread.h>
#include <string>

using namespace std;

#define ll long long

void solve() {
    int x, k; cin >> x >> k;

    if (x == 1 && k == 1) {
        cout << "NO\n";
        return;
    }

    string numstr = "";
    for (int i=0; i<k; i++) numstr += to_string(x);
    
    long long num;
    try {
        num = stoll(numstr);
    } catch (...) {
        cout << "NO\n";
        return;
    }
    
    bool prime = true;
    for (long long d = 2; d*d <= num; d++) {
        if (num % d == 0) {
            prime = false;
            break;
        }
    }

    if (prime) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int tc; cin >> tc;
    for (int t=1; t<tc+1; t++) {
        solve();
    }
    return 0;
}
 

