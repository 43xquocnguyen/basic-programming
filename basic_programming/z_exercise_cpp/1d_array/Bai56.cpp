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
void sapTang(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
}
void PT_nhieunhat(int a[], int n) {
    int max = 0, dem = 0, vt;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                dem++;
                if (dem > max) {
                    max = dem;
                    vt = i;
                }
            }
        }
    }
    cout << a[vt];
}
int VT_x(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
        else
            return 0;
    }
}
void chen_x(int a[], int &n, int x) {
    int vtt;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            vtt = i;
            break;
        }
    }
    n++;
    for (int j = n - 1; j > vtt; j--) {
        a[j] = a[j - vtt];
    }
    a[vtt] = x;
}
void KT_x(int a[], int &n, int x) {
    if (VT_x(a, n, x) == true)
        cout << "\nx xuat hien vi tri " << VT_x(a, n, x) << endl;
    else {
        chen_x(a, n, x);
    }
}
int main() {
    srand(time(NULL));
    int a[100], n;
    cout << "Nhap so phan tu cua mang A:";
    cin >> n;

    nhapmang(a, n);
    cout << "Mang la: \n";
    xuatmang(a, n);

    sapTang(a, n);
    cout << "Mang la: \n";
    xuatmang(a, n);

    cout << "Phan tu xuat hien nhieu nhat la: ";
    PT_nhieunhat(a, n);

    int x;
    cout << "\nNhap x:";
    cin >> x;
    chen_x(a, n, x);
}