#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  int c = 1;
  int maior;
  int conta = 1;
  
  cin >> n;

  vector<int> vec(n);

  vector<int> contador(2);
  contador[0] = 1;


  for (int i = 0; i < n; i++) {
  cin >> vec[i];
  }
  for (int i = 0;i < n - 1; i++) {
    
    if (vec[i] == vec[i+1]) {
      contador[0]++;
    }
    else {
      contador[0] = 1;
     
    }
    maior = max(maior, contador[0]);
    
  }
  cout << maior << endl;
  

  
  return 0;
}