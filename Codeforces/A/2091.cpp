#include <iostream>
#include <map>

using namespace std;

#define ll long long

void solve() {

    int n; cin >> n;

    map<int, int> nums = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
      
    bool found = false;
    int c = 0;

    for (int i=0; i<n; i++) {
        int a; cin >> a;
        nums[a]--;
        if (nums[0] <= 0 && nums[1] <= 0 && nums[2] <= 0 && nums[3] <= 0 && nums[5] <= 0) found = true;
        else c++;
    }

    if (found) cout << c + 1 << "\n";
    else cout << 0 << "\n";
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
 

