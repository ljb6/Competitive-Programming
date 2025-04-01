#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int execs;
    cin >> execs;
    
    int sum = 0;
    
    for (int i = 0; i < execs; i++) {
        string bit;
        cin >> bit;
        
        if (bit == "X++" || bit == "++X") {
            sum++;
        } else {
            sum--;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
