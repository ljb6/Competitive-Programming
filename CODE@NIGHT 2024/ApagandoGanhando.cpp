#include <bits/stdc++.h>
#include <iterator>
#include <string>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _

    while (true) {

        int n, d; cin >> n >> d;

        if (n == 0 && d == 0) break;
        
        vector<int> v(n);

        string snum; cin >> snum;

        int startHigher = 0, pos = 0;
        for (int i = 0; i < n; i++) {
            int num = snum[i] - '0';
            if (i < (n - d + 1)) {
                if (num > startHigher) {
                    startHigher = num;
                    pos = i;
                }
            }
            v[i] = num;
        } 

        d -= pos;
        for (int i = 0; i < pos; i++) v[i] = -1;

        int remove = 0;
        while (d--) {
            auto it = find(v.begin(), v.end(), remove);
            if (it != v.end()) {
                v[distance(v.begin(), it)] = -1;
            } else {
                remove++;
                d++;
            }
        }

        for (int x : v) {
            if (x != -1) cout << x;
        }
        cout << endl;
        
    }
    return 0;
}

