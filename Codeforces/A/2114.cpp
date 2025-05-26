#include <bits/stdc++.h>
#include <cmath>
#include <string>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

void solve() {
    string s; cin >> s;
    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(2, 2));

    if ((a + b) * (a + b) == stoi(s)) {
        cout << a << " " << b << endl;
    } else {
        int sqrt_year = sqrt(stoi(s));
        if (sqrt_year * sqrt_year == stoi(s)) {
            if (sqrt_year % 2 == 0) {
                cout << sqrt_year / 2 << " " << sqrt_year / 2 << endl;
            } else {
                cout << sqrt_year / 2 + 1 << " " << sqrt_year / 2 << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
}

int main() { _
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

