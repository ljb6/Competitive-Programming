#include <iostream>

using namespace std;

void solve() {
    int c, sum = 0;
    cin >> c;

    while (c--) {
        int x; cin >> x;
        if (x == 1)
            sum++;
    }

    cout << sum << "\n";
}

int main() {
    solve();

    return 0;
}
