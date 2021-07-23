#include <iostream>
#include <time.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0 + rand() % 100;
    }
}
void xuatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
}
void sapxep(int a[], int n , int c[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            c[k] = a[i];
            k++;
        }
    }
    for (int l = 0; l < n; l++) {
        if (a[l] == 0) {
            c[k] = a[l];
            k++;
        }
    }
    for (int j = 0; j < n; j++) {
        if (a[j] % 2 == 0) {
            c[k] = a[j];
            k++;
        }
    }
}
int Tim_SNTbehonx(int a[], int n, int x) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < x) {
            if (a[i] > max) {
                if (isPrime(a[i])) {
                    max = a[i];
                }
            }
        }
    }
    return max;
}

int main() {
    srand(time(NULL));
    int a[200], c[200];
    int n;
    cout << "Nhap so phan tu cua A: ";
    cin >> n;

    nhapmang(a, n);
    cout << "Mang la: \n";
    xuatmang(a, n);

    sapxep(a, n, c);
    cout << "\nMang la sau khi sap xep: \n";
    xuatmang(c, n);

    int x;
    cout << "\nNhap x: ";
    cin >> x;
    cout << "So nguyen to nho hon va gan voi x nhat la: ";
    cout << Tim_SNTbehonx(a, n, x);

}