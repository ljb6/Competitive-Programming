#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    int sumA = 0, sumB = 0, sumC = 0;
 
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
 
        sumA += a;
        sumB += b;
        sumC += c;
    }
 
    if (sumA != 0 || sumB != 0 || sumC != 0) cout << "NO";
    else cout << "YES";
 
}