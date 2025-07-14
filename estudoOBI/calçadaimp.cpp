#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  vector<int> a(n);
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int maximo = 0;

  for (int j = 1; j <= n; j++) {
    for (int k = 1; k <= n; k++) {
      int ultimo = -1;
      int contador = 0;
  
      for (int i = 0; i < n; i++) {
        if (a[i] == j || a[i] == k) {
          if (a[i] != ultimo) {
            contador++;
            ultimo = a[i];
          }
        }
        if (contador > maximo) {
          maximo = contador;
        }
      }
    }
  }

  cout << maximo << endl;
}