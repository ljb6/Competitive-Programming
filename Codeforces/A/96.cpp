#include <iostream>
#include <string>
 
int main() {
    std::string input;
    std::cin >> input;
 
    int counter = 1;
    std::string result = "NO\n";
    for (int i = 1; i < input.length(); i++) {
        if (input[i] != input[i - 1]) {
            counter = 0;
        }
        counter++;
 
        if (counter == 7) {
            result = "YES\n";
            break;
        }
    }
    std::cout << result;
}