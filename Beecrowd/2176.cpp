#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main()
{
  _

      string bits;
  cin >> bits;

  int c = 0;
  for (int i = 0; i < bits.length(); i++)
  {
    if (bits[i] == '1')
      c++;
  }

  if (c % 2 == 0)
  {
    cout << bits + "0" << endl;
  }
  else
  {
    cout << bits + "1" << endl;
  }

  return 0;
}
