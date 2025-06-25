#include <iostream>

using namespace std;

int main() {
    int e, s, l; cin >> e >> s >> l;
    cout << abs(e - s) + abs(l - s) + abs(l - e) << endl;
    return 0;
}