#include <bits/stdc++.h>
using namespace std;

const int maxn = 200;
vector<int> dp(maxn, -1);
vector<int> adj[maxn];

int dfs(int u) {
    if (dp[u] != -1) return dp[u];
    dp[u] = 1;
    for (auto v : adj[u]) {
        dp[u] = max(dfs(v) + 1, dp[u]);
    }
    return dp[u];
}

int main() {
    int s, t, p;
    cin >> s >> t >> p;

    vector<int> vec(s);
    for (int i = 0; i < s; i++) cin >> vec[i];

    for (int j = 0; j < t; j++) {
        int a, b;
        cin >> a >> b;
        if (vec[a-1] > vec[b-1]) {
            adj[a-1].emplace_back(b-1);
        }
        else if (vec[a-1] < vec[b-1]) {
            adj[b-1].emplace_back(a-1);
        }
    }

    cout << (dfs(p-1) - 1) << endl;
}