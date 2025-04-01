#include <iostream>
 
using namespace std;
 
int main() {
    int cases;
    cin >> cases;
    
    int sum = 0;
    
    for (int i = 0; i < cases; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a + b + c >= 2) {
            sum++;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}