#include <bits/stdc++.h>

using namespace std;

int main () {
vector<int>vec(3);
map<int, int> freq;

for (int i = 0; i < 3; i++) {
  cin >> vec[i];
  freq[vec[i]]++;
}

for (auto a : freq) {
  if (a.second == 1){
    cout << a.first << endl;
    break;
  }
}
}