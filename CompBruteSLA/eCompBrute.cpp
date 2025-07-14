#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin >> n;
vector<int> a(n);

for (int i = 0; i<n; i++) {
  cin >> a[i];
}

int menor = a[0];
int maior = a[0];

for (int i = 0; i<n; i++) {
  menor = min(menor,a[i]);
  maior = max(maior,a[i]);
}

cout << maior - menor << endl;

}