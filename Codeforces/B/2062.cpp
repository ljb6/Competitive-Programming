#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    
    while (t--) {
      
      int n;
      cin >> n;
      
      bool pass = true;
      for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= ((n - i - 1) * 2) || a <= (i * 2)) {
          pass = false;
          i == n;
        }
      }
      pass == true ? cout << "YES" << endl : cout << "NO" << endl;
    }
} 