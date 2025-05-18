#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

vector<int> parent, _size;

struct Edge {
    int v1, v2, weight;
    bool operator<(const Edge& other) const {
        return weight < other.weight;
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

    int verticesNum, edgesNum; cin >> verticesNum >> edgesNum ;

    parent.resize(verticesNum + 1);
    _size.resize(verticesNum+ 1, 1);

    vector<Edge> edges;

    Edge e;
    for (int i = 0; i < edgesNum; i++) {
        cin >> e.v1 >> e.v2 >> e.weight;
        edges.push_back(e);
    }

    sort(edges.begin(), edges.end());

    for (int i = 1; i <= verticesNum; i++) parent[i] = i;

    int totalWeight = 0;
    for (auto& e : edges) {
        if (findParent(e.v1) != findParent(e.v2)) {
            unite(e.v1, e.v2);
            totalWeight += e.weight;
        }
    }

    cout << totalWeight << endl;

    return 0;
}

