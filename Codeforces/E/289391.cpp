#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

vector<int> parent, _size;

struct Edge {
   int x, y, c;
   bool operator<(const Edge& other) const {
       return c < other.c;
   }
};

int findParent(int x) {
    if (parent[x] == x) return x;
    return parent[x] = findParent(parent[x]);
}

void unite(int x, int y) {
    x = findParent(x);
    y = findParent(y);
    if (x == y) return;
    if (_size[x] < _size[y]) swap(x, y);
    parent[y] = x;
    _size[x] += _size[y];
}

int main() { _
    int n, m; cin >> n >> m;

    vector<Edge> edges;
    
    parent.resize(n + 1);
    _size.resize(n + 1, 1);

    Edge e;
    for (int i = 0; i < m; i++) {
        cin >> e.x >> e.y >> e.c;
        edges.push_back(e);
    }

    sort(edges.begin(), edges.end());

    for (int i = 1; i <= n; i++) parent[i] = i;

    ll mst = 0;
    for (auto& e : edges) {
        if (findParent(e.x) != findParent(e.y)) {
            unite(e.x, e.y);
            mst += e.c;
        }
    }

    cout << mst << endl;

    return 0;
}

