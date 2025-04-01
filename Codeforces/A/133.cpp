#include <iostream>
#include <string> 
 
using namespace std;
 
int main() 
{
    string s;
    cin >> s;
  
    
    bool status = false;
    for (int i = 0; i < s.length(); i++) {
      char l = s[i];
      if (l == 'H' || l == 'Q' || l == '9') {
        cout << "YES";
        return 0;
      }
    }
    cout << "NO";
    return 0;
}