#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
 
        int starter = a;
        while (true) {
            if (starter % a == 0 && starter % b == 0) {
                cout << starter << endl;
                break;
            }
            starter++;
        }
    }
}