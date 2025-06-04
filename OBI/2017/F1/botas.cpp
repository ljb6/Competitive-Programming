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

    vector<pair<int, int>> b(60, {0, 0});
    int n; cin >> n;
    while (n--) {
        int s; cin >> s;
        char p; cin >> p;
        if (p == 'E') b[s].f++;
        else b[s].s++;
    }

    int sum = 0;
    for (pair<int, int> x : b) {
        sum += min(x.f, x.s);
    }

    cout << sum << endl;

    return 0;
}

