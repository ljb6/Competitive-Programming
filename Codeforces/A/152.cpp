#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n, m; cin >> n >> m;
 
    vector<string> marks;
 
    for (int i=0; i<n; i++) {
        string mark; cin >> mark;
        marks.push_back(mark);
    }
    
    int output = 0;
    for (int i=0; i<n; i++) {
        bool was = false;
        for (int j=0; j<m; j++) {
            bool is = true;
            for (int k=0; k<n; k++) {
                if (marks[i][j] < marks[k][j])
                    is = false;
            }
            if (is)
                was = true;
        }
        if (was)
            output++;
    }
 
    cout << output << "\n";
}
 
int main() {
    solve();
    return 0;
}
