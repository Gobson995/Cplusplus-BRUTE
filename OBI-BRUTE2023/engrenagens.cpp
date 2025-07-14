#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> vec(n);

  for(int i = 1; i <= n; i++) {
    cin >> vec[i];
  }


  for (int j = 0; j < q; j++) {
    int g,p;
    cin >> g >> p;

    if (g == 1) {
      for (int i = 1; i <= n; i++) {
        if (i % 2 !=0 & p % 2 !=0){
        vec[i] = (vec[i] + vec[p]) % vec[i];
        }
        else if (i % 2 ==0 & p % 2 !=0) {
          vec[i] = ((vec[p] -vec[i]) % vec[i]) - vec[i];
        }
        else if (i % 2 !=0 & p % 2 ==0)
        vec[i] = (vec[i] - vec[p]) % vec[i];
        else {
         vec[i] =  (vec[i] + vec[p]) % vec[i]; 
        }
      } 
    }
  }
  
for (int i = 1; i <= n; i++) {
  cout << vec[i] << endl;
}



  
}