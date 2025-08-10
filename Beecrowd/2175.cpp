#include <bits/stdc++.h>

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {
  _

      vector<float>
          tempos(3);

  float best = 101;
  for (int i = 0; i < 3; i++) {
    float n;
    cin >> n;
    tempos[i] = n;
    best = min(best, n);
  }

  int c = 0;
  int idx = 0;
  for (int i = 0; i < 3; i++) {
    if (tempos[i] == best) {
      idx = i;
      c++;
    }
  }

  if (c > 1) {
    cout << "Empate" << endl;
  } else {
    if (idx == 0) {
      cout << "Otavio" << endl;
    } else if (idx == 1) {
      cout << "Bruno" << endl;
    } else {
      cout << "Ian" << endl;
    }
  }

  return 0;
}
