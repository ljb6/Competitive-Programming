#include <iostream>
#include <map>
 
using namespace std;
 
int main() 
{
    int n, x;
    cin >> n >> x;
    
    map<int, int> mp;
    
    int counter = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        auto it = mp.find(x - a);
        if (it != mp.end()) {
          cout << it->second + 1 << " " << counter + 1;
          return 0;
        }
        mp[a] = counter;
        counter++;
        
    }
    cout << -1;
    return 0;
}