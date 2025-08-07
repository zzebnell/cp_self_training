/*
  user: zebnel
  created: 2025-08-04 21:11:25
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    vector<int> p;
    int i = 0;
    while (i < n) {
      int start = v[i];
      p.push_back(v[i]);
      while (i < n && start == v[i]) {
        i++;
      }
    }
    if (n < 3) {
      cout << "YES" << '\n';
      continue;
    }
    bool ok = 1;
    n = p.size();
    for (i = 1; i < n - 1 && ok; i++) {
      if ((p[i] < p[i - 1] && p[i] < p[i + 1])) {
        ok = 0;
      }
      /*if (((v[i] == v[i - 1] && v[i] == v[i + 1]) && (i > 1 && i < (n - 2)))) {
        ok = 0;
      }*/
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }

  return 0;
}

/*
  Mami, contigo ni el Dijkstra más optimizado
  encuentra un camino más corto a mi corazón.
  Eres como un segment tree con lazy propagation:
  me actualizas completo con solo una mirada.

  Y no es solo eso...
  Eres como un problema NP-Hard:
  todos intentan encontrar tu solución óptima,
  pero yo tengo el heurístico perfecto.
  Mi backtracking no falla,
  estoy dispuesto a explorar todas tus combinaciones posibles.
*/

