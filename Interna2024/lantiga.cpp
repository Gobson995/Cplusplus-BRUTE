#include <bits/stdc++.h>

using namespace std;

using ll = long long;


const int maxn = 1e5+5;

vector<int> adj [maxn], color(maxn);
vector<bool> vis (maxn);


bool dfs (int u) {
  vis[u] = 1;
  for (auto v: adj[u]) {
    if (vis[v] && color[v] == !color[u])continue;
    else if (vis[v] && color[v] == color [u]) return false;
    else {
      color[v] = !color[u];
      if (!dfs(v)) {
        return false;
      }
    }
  }
  return true;
}

signed main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
 // grafo bicolorido

 int n,m; cin >> n >>m;
 
 while (m--) {
  int u,v; cin >> u >> v;
  --u,--v;
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
  cout << "IMPOSSIVEL" << endl;
 }
 else{
  cout << "POSSIVEL" << endl;
  vector<vector<int>> a (2);
  for (int i = 0; i < n; i++) {
    a[color[i]].emplace_back(i);
  }
  cout << a[0].size() << " " << a[1].size() << endl;
  for (auto u : a[0]) {
    cout << u+1 << " ";
    }
    cout << endl;
  
  for (auto u : a[1]) {
    cout << u+1 << " ";
    }
    cout << endl;
  }
 }
 
