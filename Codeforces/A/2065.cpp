#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    
    int t;
    cin >> t;
 
    while (t--) {
        string word;
        cin >> word;
 
        word[word.length() - 2] = 'i';
        word.pop_back();
        cout << word << "\n";
    }
    return 0;
}