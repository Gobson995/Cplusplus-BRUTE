#include <bits/stdc++.h>

using namespace std;

int main () {
int c,n;

cin >> n >> c;

map<int,int>freq;

for(int i = 0; i<n;i++){
  int naipe;
  cin >> naipe;
  freq[naipe]++;
}

int maxnaipe = 0;

for (auto& p : freq) {
  if (p.second > maxnaipe) {
  maxnaipe = p.second;
  }
}

int resp = n - maxnaipe;
cout << resp << endl;

}