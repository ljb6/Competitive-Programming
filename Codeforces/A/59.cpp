#include <iostream>
#include <string>
#include <cctype>
 
using namespace std;
 
string to_lower_or_uper(const string& word, int option) {
	string output = "";
	for (char c : word) {
		output += (option == 1) ? tolower(c) : toupper(c);
	}
	return output;
}
 
int main() {
	string word;
	cin >> word;
 
	int lower = 0, upper = 0;
	for (int i = 0; i < word.length(); i++) {
		word[i] >= 'a' && word[i] <= 'z' ? lower++ : upper++;
	}
 
	string result;
 
	result = (lower >= upper) ? to_lower_or_uper(word, 1) : to_lower_or_uper(word, 2);
 
	cout << result << endl;
}