#include <bits/stdc++.h>
#include <string>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _

    map<int, string> mp = {{2, "segunda"}, {3, "terca"}, {4, "quarta"}, {5, "quinta"}, {6, "sexta"}};

    int e1, e2; cin >> e1 >> e2;

    vector<vector<pair<int, int>>> vec(7);
    for (int i = 0; i < e1; i++) {

        int d, h, m, dur;
        scanf("%d %d:%d %d", &d, &h, &m, &dur);

        int start = h * 60 + m;
        int end = h * 60 + m + dur;
        
        vec[d].push_back({start, end});
    }

    string res = "Sem massagem essa semana :(";
    for (int i = 0; i < e2; i++) {

        bool ok = true;
        int d, h, m;

        scanf("%d %d:%d", &d, &h, &m);

        int time = h * 60 + m;

        if (vec[d].empty() && res == "Sem massagem essa semana :(") {
            res = to_string(h) + ":" + to_string(m) + " na " + mp[d];
        }

        for (int j = 0; j < vec[d].size(); j++) {
            if (time >= vec[d][j].f && time <= vec[d][j].s) ok = false;
        }

        if (ok && res == "Sem massagem essa semana :(") res = to_string(h) + ":" + to_string(m) + " na " + mp[d];
    }

    cout << res << endl;

    return 0; 
}

