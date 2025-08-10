/*
  user: zebnel
  created: 2025-08-10 18:24:36
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int64_t n, k;
    cin >> n >> k;
    vector<int64_t> S(n), T(n);
    for (int i = 0; i < n; i++) {
      cin >> S[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> T[i];
    }
    // preproccess T
    for (int i = 0; i < n; i++) {
      T[i] = T[i] - (T[i] / k) * k;
    }
    multiset<int64_t> mT(T.begin(), T.end());
    for (int i = 0; i < n; i++) {
      int64_t a, b;
      a = S[i] - (S[i] / k) * k;
      b = abs(a - k);
      auto it = mT.find(a);
      if (it != mT.end()) {
        mT.erase(it);
      } else {
        it = mT.find(b);
        if (it != mT.end()) {
          mT.erase(it);
        }
      }
    }
    cout << (mT.size() ? "NO" : "YES") << '\n';
  }

  return 0;
}
