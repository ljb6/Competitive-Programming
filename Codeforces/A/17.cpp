#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> vec;
int n, k;

void check() {
    int res = 0;
    for (int i = 1; i < vec.size(); i++) {
        if (find(vec.begin(), vec.end(), vec[i] + vec[i-1] + 1) != vec.end()) res++;
    }
    if (res >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    cin >> n >> k;

    vector<bool> primes(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (primes[p] == true) {
            for (int i = p * p; i <= n; i += p) {
                primes[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++) {
        if (primes[p] == true) vec.push_back(p);
    }
    
    check();

    return 0;  
}
