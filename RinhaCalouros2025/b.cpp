#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
       int n; cin >> n; 
       vector<int> vec(n);
 
       for(int i = 0;i < n;i++){
        cin >> vec[i]; 
       }
 
 
for(int i = 2; i < n;i++){
 
        if(vec[i] != vec[i-1] && vec[i] != vec[i-2]){
            cout << (i+1) << endl;
            break;
        }else if(vec[i] != vec[i-1] && vec[i] == vec[i-2]){
            cout << (i) << endl;
           break;
        }else if(vec[i] == vec[i-1] && vec[i] != vec[i-2]){
            cout << (i-1) << endl;
            break;
        }
        }
       }
}