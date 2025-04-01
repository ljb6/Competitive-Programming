#include <iostream>
 
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
 
    const long long odds = (n + 1) / 2;
 
    if (k <= odds) {
        cout << k * 2 - 1 << "\n";
    } else {
        cout << 2 * (k - odds) << "\n";
    }
 
}