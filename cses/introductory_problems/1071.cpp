/*
  user: zebnel
  created: 2025-09-02 19:18:08
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    ll row, col;
    cin >> row >> col;
    row--, col--;
    if (row > col) {
      ll id = 1 + 4 * ((row + 1) / 2) * ((row + 1) / 2);
      ll val = (row & 1 ? id - 1 : id);
      if (row & 1) { // descendente
        cout << val - col << '\n';
      } else { // ascendente
        cout << val + col << '\n';
      }
    } else {
      ll id = 2 * (col / 2) + 1;
      id *= id;
      ll val = (col & 1 ? id + 1 : id);
      if (col & 1) { // ascendente
        cout << val + row << '\n';
      } else {
        cout << val - row << '\n';
      }
    }
  }

  return 0;
}

