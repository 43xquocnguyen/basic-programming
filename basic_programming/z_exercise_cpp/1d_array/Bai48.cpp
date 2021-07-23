#include <iostream>
#include <time.h>
using namespace std;

void nhapmang(int a[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = 1 + rand() % 100;
    }
}
void xuatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Gia tri a[" << i << "] = " << a[i] << endl;
    }
}
void sapTang(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)  {
            if (a[i] > a[j]) {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
}
void xoaPhantu(int a[], int &n, int vtxoa) {
    for (int i = vtxoa; i < n; i++) {
        a[i] = a[i + 1];
    }
    n--;
}
void xoaPT_trungnhau(int a[], int &n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (a[i] == a[j]) {
                xoaPhantu(a, n, j);
                j--;
            }
        }
    }
}

int main() {
    int a[200], n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhapmang(a, n);

    cout << "Mang la: " << endl;
    xuatmang(a, n);

    sapTang(a, n);
    cout << "Mang sap xep: \n";
    xuatmang(a, n);

    xoaPT_trungnhau(a, n);
    cout << "Mang sau khi xoa cac phan tu trung nhau: \n";
    xuatmang(a, n);
    return 0;
}