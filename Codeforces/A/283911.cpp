#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int n, k;

int main() { _
    cin >> n >> k;

    vector<int> vec(n);
    for (int i=0; i<n; i++) cin >> vec[i];

    while (k--) {
        int num; cin >> num;
        int l=0, r=vec.size()-1;
        bool found = false;
        while (l <= r) {
            int mid = (l+r)/2;
            if (vec[mid] == num) {
                found = true;
                break;
            }
            if (vec[mid] > num) r = mid - 1;
            else l = mid + 1;
        }
        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

