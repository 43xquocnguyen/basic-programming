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
void sapGiam(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)  {
            if (a[i] < a[j]) {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
}
void manglonhonK(int a[], int &n) {
    int k, vt = 0;
    cout << "Nhap vao k: ";
    cin >> k;
    sapGiam(a, n);
    for (int i = 0; i < n; i++) {
        if (k > a[i]) {
            vt = i;
            break;
        }
    }
    n = n - (n - vt);

}
float TBC(int a[], int n) {
    float S = 0;
    for (int i = 0; i < n; i++) {
        S = S + a[i];
    }
    return S / n;
}
int main() {
    int a[200], n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhapmang(a, n);

    cout << "Mang la: " << endl;
    xuatmang(a, n);

    manglonhonK(a, n);
    cout << "Mang la: " << endl;
    xuatmang(a, n);

    cout << "TBC cua cac phan tu = " << TBC(a, n) << endl;
    return 0;
}