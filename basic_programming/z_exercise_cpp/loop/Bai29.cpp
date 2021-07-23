#include <iostream>
#include <math.h>
using namespace std;

int ktsnt(int n) {
    for (int i = 2; i <= sqrt(n); i++)
       if (n % i == 0) return 1;
    return 0;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (ktsnt(n) == true) {
        cout << n << " la so nguyen to" << endl;
    }
    else {
        cout << n << " khong la so nguyen to" << endl;
        int snt = n - 1;
        while(snt >= 0 && ktsnt(snt))
            snt--;
        cout << "So nguyen to gan nhat va nho hon n la: " << snt;
    }
} 