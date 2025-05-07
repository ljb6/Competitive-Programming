#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int n; cin >> n;    
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        vec.push_back({a, b});
    }
    sort(vec.begin(), vec.end(), comp);

   int out = 0, end = -1;
   for (int i = 0; i < n; i++) {
       if (vec[i].first > end) {
           end = vec[i].second;
           out++;
       }
   }
   cout << out << endl;
}
