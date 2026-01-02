#include <bits/stdc++.h>

using namespace std;

#define ll long long;

int main()
{
  int n, h;
  cin >> n >> h;

  int c = 0;

  while (n--)
  {
    int x;
    cin >> x;
    if (x > h)
      c++;
    c++;
  }

  cout << c << "\n";

  return 0;
}
