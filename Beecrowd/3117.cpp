#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int sum = 0;
    while(n--) {
        int a; cin >> a;
        if (a <= 0)
            sum++;
    }

    if (sum >= k)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    solve();
    return 0;
}
