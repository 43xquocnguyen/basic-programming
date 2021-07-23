#include <iostream>
using namespace std;

int main(){
    int i = 1;
    float A, S = 0;
    do {
        cout << "DK: 0 < A < 2\nNhap vao so A: ";
        cin >> A;
        if (A <= 0 || A >= 2)
            cout << "So A sai! Nhap lai ";
    } while (A <= 0 || A >= 2);
    while (S < A) {
        S = S + (1.00 / i);
        i++;
    }
    cout << "N min de S > A: " << i << endl;
}
     
