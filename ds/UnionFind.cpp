class UnionFind {
  private:
    vector<int> p, rank;
    int sets;
  public:
    UnionFind(int n) {
      sets = n;
      p.assign(n, 0);
      rank.assign(n, 0);
      iota(p.begin(), p.end(), 0);
    }
    int find(int i) {
      return (p[i] == i ? i : p[i] = find(p[i]));
    }
    bool same(int i, int j) {
      return find(i) == find(j);
    }
    bool unite(int i, int j) {
      if (same(i, j)) {
        return 0;
      }
      int x, y;
      x = find(i);
      y = find(j);
      if (rank[x] > rank[y]) {
        swap(x, y);
      }
      p[x] = y;
      if (rank[x] == rank[y]) {
        rank[y]++;
      }
      sets--;
      return 1;
    }
};
