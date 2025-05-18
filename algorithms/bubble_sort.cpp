#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _

    int size; cin >> size;

    vector<int> vec(size);

    for (int i = 0; i < size; i++) cin >> vec[i];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (vec[j] > vec[j + 1]) swap(vec[j], vec[j + 1]);
        }
    }

    for (int x : vec)
        cout << x << " ";
    cout << endl;

    return 0;
}

