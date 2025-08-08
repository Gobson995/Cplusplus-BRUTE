#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;

  int h,l;
  h = 0;
  l = 0;

  int hmax, hmin, lmax,lmin;
  hmax = 0; hmin = 0; lmax = 0; lmin = 0;

  for (int i = 0; i < n; i++) {
    int e;
    char d;
    cin >> e >> d;

    if (d == 'N') {
      h += e;
    }
    else if (d == 'S') {
      h -= e;
    }
    else if (d == 'L') {
      l += e;
    }
    else if (d == 'O') {
      l -= e;
    }

    hmax = max(hmax,h);
    hmin = min(hmin,h);
    lmax = max(lmax,l);
    lmin = min(lmin,l);
  }

  hmax += 1;
  hmin -= 1;
  lmax += 1;
  lmin -= 1;

  hmax = hmax - hmin;
  lmax = lmax - lmin;

  int perimetro;

  perimetro = (hmax * 2) + (lmax * 2);

  cout << perimetro << endl;
}