#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> grades;
    int last = NULL;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 0) {
            continue;
        } else if (i < k) {
            grades.push_back(a);
            last = a;
        } else if (a == last) {
            grades.push_back(a);
        }
    }
    
    cout << grades.size() << endl;
    return 0;
}