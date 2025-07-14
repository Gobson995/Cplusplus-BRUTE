//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <bits/stdc++.h>

using namespace std;

int main () {
  double x;
  int h;
  double s;

  cout << "Quanto você ganha por hora?" << endl;
  cin >> x;
  cout << "Quantas horas você trabalhou nesse mês?" << endl;
  cin >> h;
  s = x*h;
  cout << "Seu salario nesse mês é de: " << s << " reais" << endl;
}