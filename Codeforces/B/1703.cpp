#include <iostream>
#include <string>
#include <unordered_set>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        int n, c = 0;
        cin >> n;
 
        unordered_set<char> seen;
 
        string b;
        cin >> b;
        for (int j = 0; j < n; j++) {
            if (seen.count(b[j])) {
                c++;
            } else {
                seen.insert(b[j]);
                c += 2;
            }
        }
        cout << c << "\n";
    }
}