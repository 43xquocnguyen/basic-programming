#include <iostream>
using namespace std;

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]:";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Gia tri a[" << i << "] = " << a[i] << endl;
    }
}
void themPhantu(int a[], int &n, int vtt, int socanthem) {
    n++;
    for (int i = n - 1; i >= vtt; i--) {
        a[i] = a[i - 1];
    }
    a[vtt] = socanthem;
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
void themX(int a[], int &n) {
    int x, vtt = 0;
    cout << "Nhap so x can them: ";
    cin >> x;
    sapTang(a, n);
    for (int i = 0; i < n; i++) {
        if (x < a[i]) {
            vtt = i;
            break;
        }
    }
    themPhantu(a, n, vtt, x);
    
}
int main() {
    int a[200], n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhapmang(a, n);

    cout << "Mang la: " << endl;
    xuatmang(a, n);

    
    themX(a, n);
    cout << "Mang sau khi them x la: " << endl;
    xuatmang(a, n);
    return 0;
}