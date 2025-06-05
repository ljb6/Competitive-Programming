#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int main() { _
    int sum = 0; 

    for (int i = 0; i < 6; i++) {
        char c; cin >> c;
        if (c == 'V') sum++;
    }

    if (sum < 1) cout << -1 << endl;
    else if (sum < 3) cout << 3 << endl;
    else if (sum < 5) cout << 2 << endl;
    else cout << 1 << endl;

    return 0;
}

