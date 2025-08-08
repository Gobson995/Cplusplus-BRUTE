#include <bits/stdc++.h>

using namespace std;

int main () {
int n; cin >> n;

vector<pair<int,bool>> cp;

int c, p;
for (int i = 0; i < n; i++) {
  cin >> c >> p;
  cp.push_back({c,true});
  cp.push_back({p,false});
}

sort(cp.begin(),cp.end());

int max = 20;
int resp = max;

for(int i = 1; i < (n*2); i++) {
  if (cp[i].first == cp[i+1].first && cp[i].second != cp[i+1].second) {
    max = max;
    i++;
  }
  else if (cp[i].second == false) {
    max = max - 20;
  }
  else {
    max = max + 20;
  }
  if (max == resp) {
    resp = max;
  }
  else if (resp < max) {
    resp = max;
  }
  else {
    resp = resp;
  }
}
cout << resp << endl;
}




