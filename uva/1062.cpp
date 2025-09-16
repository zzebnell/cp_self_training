/*
  user: zebnel
  created: 2025-09-04 18:19:06
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int tc = 1;
  while (cin >> s && s != "end") {
    vector<stack<char>> v;
    for (char c : s) {
      if (v.empty()) {
        stack<char> st;
        st.push(c);
        v.push_back(st);
      } else {
        bool ok = 0;
        for (auto& st : v) {
          if (st.top() <= c) {
            st.push(c);
            ok = 1;
            break;
          }
        }
        if (!ok) {
          stack<char> st;
          st.push(c);
          v.push_back(st);
        }
      }
    }
    cout << "Case " << tc++ << ": " << v.size() << '\n';
    for (auto& st : v) {
      while (!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
      }
      cout << '\n';
    }
  }

  return 0;
}

