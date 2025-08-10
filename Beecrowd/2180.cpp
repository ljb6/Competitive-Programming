#include <algorithm>
#include <bits/stdc++.h>
#include <fstream>

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

vector<int> sieve(int n) {
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false;

  for (int p = 2; p * p <= n; p++) {
    if (isPrime[p]) {
      for (int m = p * p; m <= n; m += p) {
        isPrime[m] = false;
      }
    }
  }

  vector<int> primes;
  for (int i = 2; i <= n; i++) {
    if (isPrime[i])
      primes.push_back(i);
  }

  return primes;
}

int main() {
  _

      vector<int>
          primes = sieve(100000);

  int weight;
  cin >> weight;

  auto it = lower_bound(primes.begin(), primes.end(), weight);

  int sum = 0;
  for (int i = 0; i < 10 && it != primes.end(); i++, it++) {
    sum += *it;
  }

  cout << sum << " km/h" << endl;
  cout << 60000000 / sum << " h / " << 60000000 / sum / 24 << " d" << endl;

  return 0;
}
