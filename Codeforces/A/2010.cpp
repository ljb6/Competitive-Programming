#include <iostream>

using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while (t--) {
      int n, sum = 0;
      cin >> n;
      for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        i % 2 == 0 ? sum+=x : sum-= x;
      }
      cout << sum << "\n";
    }
}