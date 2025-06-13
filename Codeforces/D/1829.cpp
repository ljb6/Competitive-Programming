#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    bool possible = false;
    if (n == m) {
        possible = true;
    } else if (n % 3 != 0 || n < m) {
        possible = false;
    } else {
        stack<int> st;
        st.push(n);
        while (true) {
            
            int num = st.top(); st.pop();

            if (num % 3 == 0) {
                int n1 = (num/3);
                int n2 = (num/3) * 2;
                if (n1 == m || n2 == m) {
                    possible = true;
                    break;
                } else {
                   if (n1 > m) st.push(n1);
                   if (n2 > m) st.push(n2);
                }
            } 
            
            if (st.empty()) break;
        }
    }

    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

int main() { _
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

