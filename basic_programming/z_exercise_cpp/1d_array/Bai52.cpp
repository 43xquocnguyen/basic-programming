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
void chenmang(int a[], int b[], int &n ,int p) {
    for (int i = p; i < n + n; i++) {
        a[i + n] = a[i];
    }
    int k = 0;
    for (int j = p; j < n + p; j++) {
        a[j] = b[k];
        k++;
    }
    n = n + n;
}
int main() {
    srand(time(NULL));
    int a[200], b[200], n;
    cout << "Nhap so phan tu cho mang:";
    cin >> n;
    nhapmang(a, n);
    nhapmang(b, n);
    cout << "Mang A la:\n";
    xuatmang(a, n);
    cout << "Mang B la:\n";
    xuatmang(b, n);

    int p;
    cout << "Nhap vao vi tri can them: ";
    cin >> p;

    chenmang(a, b, n, p);

    xuatmang(a, n);
    return 0;
}