#include <iostream>
 
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    
    while (t--) {
      int m, a, b, c, output = 0;
      cin >> m >> a >> b >> c;
      
      output += min(m, a);
      output += min(m, b);
      int r = max(0, m - min(m, a)) + max(0, m - min(m, b));
 
      output += min(r, c);
 
      cout << output << "\n";
    }
}