#include <bits/stdc++.h>

using namespace std;

int main() {
  int p1;
  int p2;
  int c1;
  int c2;

 // cout << "Escreva o seu peso: " << endl;
  cin >> p1;
  //cout << "Escreva o comprimento da sua gangorra: " << endl;
  cin >> c1;
 // cout << "Escreva o peso do seu amigo: " << endl;
  cin >> p2;
 // cout << "Escreva o comprimento da gangorra do seu amigo:" << endl;
  cin >> c2;

  if (p1*c1 > p2*c2) {
    cout << "-1" << endl;
  }
  else if (p1*c1 < p2*c2){
    cout << "1" << endl;
  }
  else {
    cout << "0" << endl;
  }
}
