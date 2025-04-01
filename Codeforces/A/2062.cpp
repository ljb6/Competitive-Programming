#include <iostream>
#include <string>
 
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
      string input;
      int counter = 0;
      cin >> input;
      
      for (int j = 0; j < input.size(); j++) {
        if (input[j] == '1') {
          counter++;
        }
      }
      cout << counter << endl;
    }
}