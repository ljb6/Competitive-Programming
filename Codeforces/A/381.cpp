#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    vector<int> vec;
    
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        vec.push_back(c);
    }
 
    int s1 = 0, s2 = 0;
 
    for (int i = 0; i < n; i++) {
        int higher;
 
        int left = vec[0];
        int right = vec[vec.size() - 1];
        
 
        if (left > right) {
            higher = left;
            vec.erase(vec.begin());
        } else {
            higher = right;
            vec.erase(vec.begin() + vec.size() - 1);
        }
 
        if (i % 2 == 0) s1 += higher;
        else s2 += higher;
    }
 
    cout << s1 << " " << s2 << "\n";
 
    return 0;
}