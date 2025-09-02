#include <bits/stdc++.h>

using namespace std;

int main () {
vector<int> vec (4);

for (int i = 0; i < 4; i++) {
  cin >> vec[i];
}

sort (vec.begin(), vec.end());

int a,b;

a = vec[0] + vec[3];
b = vec[2] + vec[1];

if (a > b) {
  a = a - b;
  cout << a << endl;
}
else {
  a = b - a;
  cout << a << endl;
}


}