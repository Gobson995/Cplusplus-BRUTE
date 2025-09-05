#include <bits/stdc++.h>

using namespace std;

int main () {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  bool flag = true;

  if ((c >= a && d > b) || c > a && d >= b ) {
    flag = false;
  }

  int cont = 0;
  int tec = a;
  int squid = c;
  if (flag) {
    while (tec <= squid) {
      cont++;
      tec += b;
      squid += d;
    }
    cout << cont << endl;
  }
  else cout << "-1" << endl;
}