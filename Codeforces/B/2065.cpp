#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        string word;
        cin >> word;
 
        int c = 0;
 
        for (int i = 0; i < word.length() - 1; i++) {
            if (word[i] == word[i + 1]) {
                if (i > 0) {
                    word[i - 1] = word[i];
                    word.erase(i + 1);
                } else if (word.length() > i + 1) {
                    word[i - 1] = word[i + 2];
                    word.erase(i + 1);
                }
                c++;
            }
        }
        if (c == 0) {
            cout << word.length() << "\n";
        } else {
            cout << c << "\n";
        }
    }
 
    return 0;
}
