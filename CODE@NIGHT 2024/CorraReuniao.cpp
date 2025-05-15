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
    int n; cin >> n;

    int ll, l; cin >> ll >> l;

    for (int i = 2; i < n; i++) {
        int next; cin >> next;
        int _min = min(ll, l) + next;
        ll = l;
        l = _min;
    }

    cout << min(ll, l) << endl;

    return 0;
}

