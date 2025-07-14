#include <bits/stdc++.h>

using namespace std;

int main() {
int m,n;

cin >> n;
cin >> m;

vector<vector<int>> mat(n, vector<int> (m));

for (int i=0; i<n; i++) {

  for(int j=0; j<m; j++) {
    cin >> mat[i][j];
  }
}
}
