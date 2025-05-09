#include <bits/stdc++.h>

using namespace std;

int main() {
    // arr size
    int n; cin >> n;
    vector<int> vec(n);

    // target
    int t; cin >> t;

    // adding elements * already ordered
    for (int i = 0; i < n; i++) cin >> vec[i];

    // binary search
    int l = 0, r = n - 1;
    bool found = false;
    while (l <= r) {
        int mid = (l+r)/2;
        if (vec[mid] == t) {
            cout << "Found at pos: " << mid << endl;
            found = true;
            break;
        } else {
            if (vec[mid] < t) l = mid + 1;
            else r = mid - 1;
        }
    }
    if (!found) cout << "Target not found" << endl;

    return 0;
}

