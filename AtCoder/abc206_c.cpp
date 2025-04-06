#include <iostream>
#include <map>

using namespace std;

#define ll long long

int main() {
    ll n; cin >> n;

    map<ll, ll> ref;

    for (ll i=0; i<n; i++) {
        ll a; cin >> a;
        ref[a]++;
    }

    ll total = n * (n-1) / 2;
    ll equal = 0;

    for (auto [v, c] : ref) {
        equal += c * (c-1) /2;
    }

    cout << total - equal << "\n";
}
