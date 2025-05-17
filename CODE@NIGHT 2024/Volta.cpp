#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;

using namespace std;

int main() { _
    int x, y; cin >> x >> y;

    if (y == 2*x) {
        cout << 2 << endl;
        return 0;
    } else {
        int a = 0, b = 0;
        for (int i = 1; i < INF; i++) {
            if (a + x < b) {
                cout << i << endl;
                break;
            } 
            a += x; b += y;
        }
    }
    return 0;
}

