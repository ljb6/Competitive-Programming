#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> valores(n);
    int _max = 0;
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        _max = max(_max, v);
        valores[i] = v;
    }

    for (int i = _max; i > 0; i--) {
        for (int i = 0; i < n; i++) {
            if (valores[i] == _max) {
                cout << 1 << " ";
                valores[i]--;
            }
            else cout << 0 << " ";
        }
        cout << endl;
        _max--;
    }

    return 0;
}