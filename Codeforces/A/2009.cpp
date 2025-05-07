#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    int min = (a-a)+(b-a);
    for (int i = a+1; i <= b; i++) {
        int res = (i-a)+(b-i);
        if (res <= min) min = res;
    }
    cout << min << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
