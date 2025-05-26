#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> vec;

    int last; cin >> last; vec.push_back(last);

    for (int i = 1; i < n; i++) {
        int num; cin >> num;
        if (last + 1 < num) {
            vec.push_back(num);
            last = num;
        } 
    }
    cout << vec.size() << endl;    
}

int main() { _
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}

