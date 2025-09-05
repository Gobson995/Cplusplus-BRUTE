#include <bits/stdc++.h> 

using namespace std;

int main () {
  vector<int> toys(5);
  vector<int> bags(4);

  for(int i = 0; i < 5; i++) {
    cin >> toys[i];
  }
  for(int i = 0; i < 4; i++) {
    cin >> bags[i];
  }

  sort(toys.begin(), toys.end());
  sort(bags.begin(), bags.end());

  for (int i = 0; i < 5; i++) {
    if (toys[i] != bags[i]) {
      cout << toys[i] << endl;
      break;
    }
  }
}