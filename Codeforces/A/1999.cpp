#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string num;
        cin >> num;
        cout << (num[0] - '0') + (num[1] - '0') << endl;
    }
 
    return 0;
}