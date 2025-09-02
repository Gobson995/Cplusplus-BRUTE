#include <bits/stdc++.h>

using namespace std;

int main () {
int n,m,p;
cin >> n >> m >> p;

vector<vector<int>> mat(n,vector<int>(m));
vector<int> linha(n);
vector<int> coluna(m);

int opa = 0;

for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++){
    opa++;
    mat[i][j] = opa;
    coluna[j] = j;
  }
  linha[i] = i;
}

for (int k = 0; k < p; k++){
char lc;
int a,b;
cin >> lc >> a >> b;
a--; b--;

if (lc == 'L') {
    swap(linha[a],linha[b]);

  }
  else {
    swap(coluna[a],coluna[b]);
  }
}

for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++){
    cout << mat[linha[i]][coluna[j]] << " ";
  }
  cout << endl;
}

}