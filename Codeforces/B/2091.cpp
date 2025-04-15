#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    int valid = 0;

    vector<int> vec;

    for (int i=0; i<n; i++) {
        int a; cin >> a;
        if (a >= x) valid++;
        else vec.push_back(a);
    }

    sort(vec.rbegin(), vec.rend());
    
    int multiplier = 1;
    for (long long i=0; i<vec.size(); i++) {
        if (multiplier * vec[i] >= x) {
            valid++;
            multiplier = 1;
        } else multiplier++;
    }
    cout << valid << "\n";
}

int main() {
    int tc; cin >> tc;
    while (tc--) solve();
}
