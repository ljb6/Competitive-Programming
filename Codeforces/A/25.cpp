#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int nums, odd, even, oddq, evenq;
    cin >> nums;
    
    odd = 0;
    even = 0;
    oddq = 0;
    evenq = 0;
    
    for (int i = 1; i < nums + 1; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            even = i;
            evenq++;
        } else {
            odd = i;
            oddq++;
        }
    }
    
    if (oddq > evenq) {
        cout << even << endl;
    } else {
        cout << odd << endl;
    }
  
 
    return 0;
}
 