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
void huy_n_phantu(int a[], int &m, int n, int p) {
    for (; p < m - 1; p++) {
        a[p] = a[p + n];
    }
    m = m - n;
}
int main() {
    srand(time(NULL));
    int a[200], m;
    cout << "Nhap so phan tu: ";
    cin >> m;
    nhapmang(a, m);

    cout << "Mang la: " << endl;
    xuatmang(a, m);

    int n, p;
    cout << "Nhap vao n va p:";
    cin >> n >> p;

    huy_n_phantu(a, m, n, p);

    xuatmang(a, m);
    return 0;
}