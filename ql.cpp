#include <bits/stdc++.h>

using namespace std;

int main () {
string p;
char l;

cin >> p;
cin >> l;

int contador = 0;

for (int i=0; i < size(p); i++) {
  if (p[i] == l) {
    contador++;
  }
}

cout << contador << endl;
}