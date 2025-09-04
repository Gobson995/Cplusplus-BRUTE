#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string s; cin >> s;
    string p; cin >> p;
    bool flag = true;

    vector<int> dom;
    vector<int> img;

    int cont1 = 1;
    int pos = 0;
    for (int i = 0; i < s.size(); i++) {
      if (i == s.size() - 1) {
        dom.emplace_back(cont1);
        break;
      }
      else if(s[i] == s[i+1]) {
        cont1++;
      }
      else {
        dom.emplace_back(cont1);
        cont1 = 1;
      }
    }
    
    int cont2 = 1;
    for (int i = 0; i < p.size(); i++) {
      if (i == p.size() - 1) {
        img.emplace_back(cont2);
        break;
      }
      else if(p[i] == p[i+1]) {
        cont2++;
      }
      else {
        img.emplace_back(cont2);
        cont2 = 1;
      }
    }

    if (img.size() != dom.size()) {
      flag = false;
    }
    else {
    int ver1 = 0;
    int ver2 = 0;
    for (int j = 0; j < img.size(); j++) {
      if (s[ver1] != p[ver2]) {
        flag = false;
        break;
      }
      if (dom[j] * 2 < img[j] || img[j] < dom[j]) {
        flag = false;
        break;
      }

      ver1 += dom[j];
      ver2 += img[j];
    }
    }

    if (flag) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}