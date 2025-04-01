#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    vector<int> l;
 
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
 
        l.push_back(x);
    }
 
    sort(l.begin(), l.end());
 
    for (int x: l) {
        cout << x << " ";
    }
 
}