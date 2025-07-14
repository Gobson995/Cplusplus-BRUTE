#include <bits/stdc++.h>

using namespace std;

int main () {
int n,c,m;
cin >> n >> c >> m;

vector <int> vec(c);
vector<int> vet(m);

for (int i = 0; i < c; i++){
  cin >> vec[i];
}

for (int i = 0; i < m; i++){
  cin >> vet[i];
}

int resp = 0;
int res= 0;

for (int i = 0; i < c; i++) {
  for (int j = 0; j < m; j++){
    if (vec[i] == vet[j]) {
      break;
    }
    else {
      res++;
    }
  }
  if (res == m) {
    resp++;
  }
  else {
    resp = resp;
  }

  res = 0;
}
  cout << resp << endl;
}