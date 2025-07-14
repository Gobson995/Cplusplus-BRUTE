//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <bits/stdc++.h>

using namespace std;

int main () {
int l;
int area;

cout << "escreva o lado do quadrado" << endl;
cin >> l;
area = l*l;
cout << "A area do quadrado é: " << area << endl;
cout << "O dobro da area é: " << area*2 << endl;
}