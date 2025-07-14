#include <bits/stdc++.h>

using namespace std;

int main () {
int c, n;
cin >> c >> n;

map<int,int>freq;

for (int i = 0; i < c; i++) {
int naipe;
cin >> naipe;
freq[naipe]++;
}

int maxfreq = 0;

for(auto p : freq) {
  if(p.second > maxfreq){
  maxfreq = p.second;
}
}

int res = c - maxfreq;
cout << res << endl;
}