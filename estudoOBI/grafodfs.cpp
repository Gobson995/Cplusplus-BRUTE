#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int maxn = 1e5+5;

vector<int> adj[maxn], color(maxn);
vector<bool> vis(maxn);

bool dfs (int u) {
  vis[u] = 1;
  for (auto v : adj[u]) {
    if (vis[v] && color[v] == !color[u]) {
      continue;
    }
    else if (vis[v] && color[v] == color[u]) {
      return 0;
    }
    else {
      color[v] == !color[u];
      if (!dfs(v)) {
        return 0;
      }
    }
  }
  return 1;
}

int main() {

int m, n; cin >> m >> n;

while (n--) {
  int u, v; cin >> u >> v;
  --u;
  --v;
  adj[u].emplace_back(v);
  adj[v].emplace_back(u);
}

bool flag = 1;


for (int i = 0; i < n; i++) {
  if(!vis[i]) {
    flag = flag && dfs(i);
  }
 }

if (!flag) {
  cout << "NÃO" << endl;
}
else {
  cout << "SIM" << endl;
}
}