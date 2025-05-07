#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        string row; cin >> row;
        auto it = find(row.begin(), row.end(), '#');
        vec.push_back(distance(row.begin(), it)+1);
    }
    reverse(vec.begin(), vec.end());
    for (int x : vec) cout << x << " ";
    cout << "\n";
}   

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
