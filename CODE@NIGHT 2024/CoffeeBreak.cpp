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

    int n; cin >> n;
    
    deque<int> fila;
    queue<int> sanduiches;

    for (int i = 0; i < n; i++) {
        int f; cin >> f;
        fila.push_front(f);
    }

    for (int i = 0; i < n; i++) {
        int s; cin >> s;
        sanduiches.push(s);
    }

    int c = 0;
    while (n > 0 && c < n) {
        if (fila.front() == sanduiches.front()) {
            fila.pop_front(); sanduiches.pop(); n--;
            if (c > 0) c--;
        } else {
            int front = fila.front();
            fila.pop_front(); fila.push_back(front);
            c++;
        }
    }

    cout << n << endl;

    return 0;
}

