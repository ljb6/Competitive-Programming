#include <bits/stdc++.h>

using namespace std;

void SieveOfEratosthenes(int n) {

    // start all nums (of size n) as primes
    vector<bool> prime(n + 1, true);

    
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            // update all multiples marking as not prime
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    // print primes
    for (int p = 2; p <= n; p++) {
        if (prime[p])
            cout << p << " ";
    }
}

int main() {
    int n = 30;
    SieveOfEratosthenes(n);
    return 0;
}
