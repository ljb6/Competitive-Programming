#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int main() { _

    while (true) {
        int n; cin >> n;
        if (n == 0) break;

        vector<int> vec(n+2);
        for (int i = 1; i < n+1; i++) cin >> vec[i];

        vec[0] = vec[n];
        vec[n+1] = vec[1];

        int picos = 0;

        for (int i = 1; i < n+1; i++) {
            if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) picos++;
            else if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) picos++;
        }

        cout << picos << endl;
    }
    return 0;
}

