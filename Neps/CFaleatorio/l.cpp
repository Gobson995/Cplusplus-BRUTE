#include <bits/stdc++.h>

using namespace std;

int main () {
long long x;
cin >> x;
int resp = 23;
for (int i = 23; i < 57; i++) {

  if ( pow(2,i) < (x * 8000000)) {
    resp++;
  }
}
cout << resp << endl;
}