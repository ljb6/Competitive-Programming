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
    int N, D, A; cin >> N >> D >> A;

    if (D >= A) cout << D - A << endl;
    else cout << (N - A) + D << endl;

    return 0;
}

