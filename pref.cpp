#include <bits/stdc++.h>

using namespace std;

int main () {
int n; 
cin >> n;
string p1; 
cin >> p1;
int n2; 
cin >> n2;
string p2; 
cin >> p2;

int resp = 0;

n = min(n,n2);

for (int i = 0; i < n; i++) {
  if (p1[i] == p2[i]) {
    resp++;
  }
  else {
    break;
  }
}

cout << resp << endl;
}