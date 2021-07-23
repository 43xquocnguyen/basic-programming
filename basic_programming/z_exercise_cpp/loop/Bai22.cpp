#include <iostream>
using namespace std;

int main(){
    float n, T1 = 1, S1 = 0;
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap sai! Nhap lai: \n";
    } while (n < 0);
    for (int i = 1; i <= 2 * n; i += 2) {
        T1 = i * i;
        S1 += T1;
    }
    cout << "S1 = " << S1 << endl;

    float T2 = 1, S2 = 0, dau = 1;

    for (int i = 2; i <= 2 * n; i += 2) {
        T2 = i * i;
        S2 = S2 + ((1 / T2) * dau);
        dau = -dau;
    }
    cout << "S2 = " << T2;
}
     
