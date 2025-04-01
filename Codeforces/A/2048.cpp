#include <iostream>
#include <string>
 
using namespace std;
 
int remove33(const int n) {
    string ns = to_string(n);
    string output;
    for (int i = 0; i < ns.length(); i++) {
        if (ns[i] == '3' && ns[i + 1] == '3' && i < ns.length() - 1) {
            i++;
        } else {
            output += ns[i];
        }
    }
    if (output.empty()) {
        return 0;
    }
    return stoi(output);
}
 
int main() {
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
 
        x = remove33(x);
        x % 33 == 0 ? cout << "YES\n" : cout << "NO\n";
    }

}