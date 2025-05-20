#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _
    ll n, s; cin >> n >> s;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    int r = 0, l = 0, _max = 0;
    ll sum = 0;
    while (r < n) {
        sum += vec[r];
        while (sum > s) {
            sum -= vec[l]; 
            l++;
        }
        _max = max(_max, r-l+1);
        r++;
    }

    cout << _max << endl;

    return 0;
}

