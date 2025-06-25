#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> vec(n);

    for (int i = (n - 1); i >= 0; i--) {
        int a; cin >> a;
        vec[i] = a;
    }

    int ref = vec[0], res = 0;
    for (int i = 1; i < n; i++) {
        if (ref >= vec[i]) res++;
        else (ref = vec[i]);
    }

    cout << res << endl;

    return 0;
}