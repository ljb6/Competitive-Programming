#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int c = 0;
    
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '1') c++;
    }

    cout << (s.size() - c) * (c + 1) + (c * (c - 1)) << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
