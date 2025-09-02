#include <bits/stdc++.h>

using namespace std;

int main () {
int k,n;
cin >> k >> n;

string aa;
string me;

cin >> aa;
cin >> me;

int resp = 0;
int resp2 = 0;

for (int i = 0; i < n; i++) {
  for (int j = 0; j < k; j++) {
    if (aa[j] != me[i]) {
      resp++;
    }
  }
  if (resp == k) {
    resp2++;
    resp = 0;
  }
  else {
    resp = 0;
  }
}

if (resp2 != 0) {
  cout << "N" << endl;
}
else {
  cout << "S" << endl;
}

}