#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    cin >> x;
 
    int steps = 0, divisor = 5;
    
    while (x > 0) {
        steps += (x / divisor);
        x = x % divisor;
        divisor--;
    }
 
    cout << steps << "\n";
    
}