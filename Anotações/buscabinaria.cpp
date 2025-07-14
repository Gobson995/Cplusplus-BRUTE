#include <bits/stdc++.h>

using namespace std;

  int main () {
    int n,q;
    cin >> n;
    cin >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < q; i++) {
      int target;
      cin >> target;
      
      bool achou = false;
      
      int l = 0, r = n-1;
    
      while(l<=r) {
        int mid = (l+r)/2;

        if(a[mid] == target) {
          achou = true;
          break;
        } 

        else if (a[mid] > target) {
          r = mid-1;
        }
        else {
          l = mid+1;
        }
      }


      if (achou) {
        cout << "esta dentro do array" << endl;
      }
      else {
        cout << "não esta dentro do array" << endl;
      }
    }










  }