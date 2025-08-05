#include <bits/stdc++.h>

using namespace std;

int main () {
int d;
cin >> d;

int cubos;
cubos = d * d * d;

int c0, c1, c2, c3;

c3 = 8;
c1 = ((d-2)*(d-2)) * 6;
c2 = ((d*d) - ((d-2)*(d-2)) - 4) * 3;
c0 = cubos - c3 - c2 - c1;

cout << c0 << endl;
cout << c1 << endl;
cout << c2 << endl;
cout << c3 << endl;
}