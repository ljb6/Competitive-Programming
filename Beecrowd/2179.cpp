#include <bits/stdc++.h>
#include <stdexcept>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main()
{
  _

      int n,
      f, c;
  cin >> n >> f >> c;

  int size = n * 3;
  vector<vector<int>> matriz(size, vector<int>(size, 0));

  int num = 1;
  for (int r = n; r < 2 * n; r++)
  {
    for (int c = n; c < 2 * n; c++)
    {
      matriz[r][c] = num;
      num++;
    }
  }

  int startR = n + f, startC = n + c;

  int total_steps = 0;
  vector<int> output;

  output.push_back(matriz[startR][startC]);

  int steps = 1;
  while (output.size() < n * n)
  {
    for (int i = 0; i < steps && output.size() < n * n; i++)
    {
      startC++;
      total_steps++;
      int actual = matriz[startR][startC];
      if (actual != 0)
        output.push_back(actual);
    }

    for (int i = 0; i < steps && output.size() < n * n; i++)
    {
      startR++;
      total_steps++;
      int actual = matriz[startR][startC];
      if (actual != 0)
        output.push_back(actual);
    }

    steps++;

    for (int i = 0; i < steps && output.size() < n * n; i++)
    {
      startC--;
      total_steps++;
      int actual = matriz[startR][startC];
      if (actual != 0)
        output.push_back(actual);
    }

    for (int i = 0; i < steps && output.size() < n * n; i++)
    {
      startR--;
      total_steps++;
      int actual = matriz[startR][startC];
      if (actual != 0)
        output.push_back(actual);
    }

    steps++;
  }

  for (int i = 0; i < (int)output.size(); ++i)
  {
    if (i)
      cout << ' ';
    cout << output[i];
  }
  cout << endl;
  cout << (total_steps + 1) << endl;

  return 0;
}
