#include <bits/stdc++.h>

using namespace std;

int main () {
int l,c;
int l1,l2;

cin >> l;
cin >> c;

l2 = ((c*2)-2) + ((l*2)-2);
l1 = (l*c) + ((l-1)*(c-1));

cout << l1 << endl;
cout << l2 << endl;
}