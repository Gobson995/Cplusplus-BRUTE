#include <bits/stdc++.h>

using namespace std;

int main () {
int m,a,b,c;
cin >> m;
cin >> a;
cin >> b;

c = m - a - b;

if (a >= b && a >= c){
  cout << a << endl;
}

else if (b >= a && b >= c) {
  cout << b << endl;
}
else {
  cout << c << endl;
}
}