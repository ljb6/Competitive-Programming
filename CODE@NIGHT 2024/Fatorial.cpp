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

        int res = 0;
        while (n > 0) {
            int fat = 1, mult = 1;
            while (fat * (mult + 1) <= n) {
                mult++;
                fat *= mult;
            }

            n -= fat;
            res++;
        }
        
        cout << res << endl;
        return 0;
    }

