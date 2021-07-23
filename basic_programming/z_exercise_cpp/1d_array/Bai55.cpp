#include <iostream>
#include <time.h>
using namespace std;

void nhapmang(int a[], int m) {
    for (int i = 0; i < m; i++) {
        a[i] = 1 + rand() % 10;
    }
}
void xuatmang(int a[], int m) {
    for (int i = 0; i < m; i++) {
        cout << "Gia tri a[" << i << "] = " << a[i] << endl;
    }
}
bool KTDX(int a[], int n) { 
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}   
bool kt_mangcon(int a[], int b[], int n, int m) {
    if (n < m) {
        return false;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == b[0]) {
            for (int j = 1; j < m; j++) {
                if (a[i + j] != b[j])
                    return false;
            }
        }
    }
    return true;
}
int main() {
    srand(time(NULL));
    int a[100], n;
    cout << "Nhap so phan tu cua mang A:";
    cin >> n;

    nhapmang(a, n);
    cout << "Mang la: \n";
    xuatmang(a, n);

    if (KTDX(a,n) == 1) {
        cout << "Mang doi xung!" << endl;
    }
    else {
        cout << "Khong phai mang doi xung\n";
    }

    int b[100], m;
    cout << "Nhap so phan tu cua mang B: ";
    cin >> m;

    nhapmang(b, m);
    cout << "Mang la: \n";
    xuatmang(b, m);

    if (kt_mangcon(a, b, n, m)) {
        cout << "B la con cua A\n";
    }
    else {
        cout << "B khong la con cua A\n";
    }
}