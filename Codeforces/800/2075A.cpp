#include <iostream>
 
using namespace std;
 
int main() {
 
    int  t;
    cin >> t;
 
    while (t--) {
        int operations = 0;
 
        int n, k;
        cin >> n >> k;
 
        while (n > 0) {
            if (k == 3) {
                operations = n / 2;
                break;
            }
 
            if (n % 2 != k % 2) {
                k--;
                n -= k;
            } else {
                n -= k;
            }
            operations++;
        }
        cout << operations << "\n";
    }
    return 0;
}