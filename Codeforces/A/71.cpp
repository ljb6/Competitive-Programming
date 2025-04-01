#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    int lines;
    cin >> lines;
    
    vector<string> words(lines);
    
    for (int i = 0; i < lines; i++) {
        string word;
        cin >> word;
        long word_size = word.length();
        if (word_size <= 10) {
            words[i] = word;
        } else {
            words[i] = word[0] + to_string(word_size - 2) + word[word_size - 1];
        }
    }
    
    for (const string& w : words) {
        cout << w << endl;
    }
 
    return 0;
}