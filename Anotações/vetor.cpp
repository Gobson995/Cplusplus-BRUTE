#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int>vec(5);

  for (int i = 0; i<vec.size(); i++) {
    cout << vec[i] << ' ';
  }
  cout << endl;
  vec.pop_back();
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << ' ';
  }
  cout << endl;
  cout << vec.front() << endl;
  cout << vec.back() << endl;
}