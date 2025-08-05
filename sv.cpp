#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin >> n;

vector<int>vec(n);
int soma = 0;
for (int i = 0; i<n; i++) {
  cin >> vec[i];
  soma += vec[i];
}

cout << soma << endl;
}