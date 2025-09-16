/*
  user: zebnel
  created: 2025-09-15 11:11:34
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int q;
  cin >> q;
  map<ll, ll> mp;
  while (q--) {
    char tp;
    ll x;
    cin >> tp >> x;
    if (tp == 'a') {
      mp[x]++;
    } else if (tp == 't') {
      mp[x]--;
    } else {
      cout << mp[x] << '\n';
    }
  }

  return 0;
}

