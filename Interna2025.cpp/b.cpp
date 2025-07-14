#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string palavra;
    cin >> palavra;

    string ordem = palavra;
    sort(ordem.begin(), ordem.end());

    int posicaop = -1, posicaod = -1;

    for (int k = 0; k < n; k++) {
        if (palavra[k] != ordem[k]) {
            char letra_ideal = ordem[k];

            for (int i = n - 1; i > k; i--) {
                if (palavra[i] == letra_ideal) {
                    posicaop = i;
                    posicaod = k;
                    break;
                }
            }
            break;  
        }
    }

    if (posicaop != -1 && posicaod != -1) {
        swap(palavra[posicaop], palavra[posicaod]);
    }

    cout << palavra << endl;

}