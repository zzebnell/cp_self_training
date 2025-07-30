/*
  user: zebnel
  created: 2025-07-25 21:43:39
*/

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const double EPS = 1e-9;
const int MAX_A = 1e6 + 1;

struct Query {
  int f, s, ind;
};

struct FenwickTree {
  vector<int> bit;
  int n;

  FenwickTree(int n) {
    this->n = n;
    bit.assign(n, 0);
  }

  FenwickTree(vector<int> const &a) : FenwickTree(a.size()) {
    for (size_t i = 0; i < a.size(); i++)
      add(i, a[i]);
  }

  int sum(int r) {
    int ret = 0;
    for (; r >= 0; r = (r & (r + 1)) - 1)
      ret += bit[r];
    return ret;
  }

  int sum(int l, int r) {
    return sum(r) - sum(l - 1);
  }

  void add(int idx, int delta) {
    for (; idx < n; idx = idx | (idx + 1))
      bit[idx] += delta;
  }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vector<int> last(MAX_A, -1);
  int q;
  cin >> q;
  vector<Query> query(q);
  for (int i = 0; i < q; i++) {
    cin >> query[i].f >> query[i].s;
    query[i].ind = i;
  }
  sort(query.begin(), query.end(), [&](Query p1, Query p2) {
      return p1.s < p2.s;
      });
  vector<int> bin(n), ans(q);
  int k = 0;
  FenwickTree bit(n);
  for (int i = 0; i < n; i++) {
    if (last[v[i]] == -1) {
      last[v[i]] = i;
      bit.add(i, 1);
    } else {
      bit.add(last[v[i]], -1);
      last[v[i]] = i;
      bit.add(i, 1);
    }
    while (k < q && (query[k].s == (i + 1))) {
      ans[query[k].ind] = bit.sum(query[k].f - 1, query[k].s - 1);
      k++;
    }
  }
  for (int x : ans) {
    cout << x << '\n';
  }

  return 0;
}
