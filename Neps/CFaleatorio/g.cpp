#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    bool i1 = false, i2 = false;

    for(int q = 0; q<=n; q++) {
        int c;
        cin >> c;
        if (c == 1) {
            i1 = !i1;
        }
        else if (c == 2) {
            i1 = !i1;
            i2 = !i2;
        }
        cout << i1 << endl; 
        cout << i2 << endl;    
    }
    

    return 0;
}
