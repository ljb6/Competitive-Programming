#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    int n; cin >> n;
    stack<int> st;

    int sum = 0;

    while (n--) {
        int num; cin >> num;
        if (num == 0) {
            sum -= st.top();
            st.pop();
        } else {
            sum += num;
            st.push(num);
        }
    }

    cout << sum << endl;

    return 0;
}

