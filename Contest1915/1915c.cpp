#include <bits/stdc++.h>

using namespace std;

int main () {
int n; cin >> n;

while (n--) {
  int b; cin >> b;
  vector<int> vec(b);
  double cont = 0;

  for (int i = 0; i < b; i++) {
    cin >> vec[i];
    cont += vec[i];
  }
  double raiz;
  raiz = sqrt(cont);

  if (raiz - round(raiz) == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}

}