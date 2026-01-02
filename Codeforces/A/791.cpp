#include <bits/stdc++.h>

using namespace std;

#define ll long long;

int main()
{
  int a, b;
  cin >> a >> b;

  int c = 0;
  while (true)
  {
    c++;
    a *= 3;
    b *= 2;
    if (a > b)
      break;
  }

  cout << c << "\n";

  return 0;
}
