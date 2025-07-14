#include <bits/stdc++.h>

using namespace std;

int main() {
  int x,y,n;
  
  cin >> x >> y;
  cin >> n;

  string gols;
  
  cin >> gols;

  int gb, ga;
  
  gb = x;
  ga = y;

  for (int i = 0; i < n; i++) {
    if (gols[i] == 'A') {
      ga++;
    }
    else {
      gb++;
    }
  }

  if (gb > ga) {
    cout << "BRASIL" << endl;
  }
  else if (gb == ga) {
    cout << "EMPATE" << endl;
  }
  else {
    cout << "ARGENTINA" << endl;
  }
}