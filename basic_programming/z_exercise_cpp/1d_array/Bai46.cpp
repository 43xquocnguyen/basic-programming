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
void xoaPhantu(int a[], int &n, int vtxoa) {
    for (int i = vtxoa; i < n; i++) {
        a[i] = a[i + 1];
    }
    n--;
}
void timKiem(int a[], int n) {
    int x, dem = 0;
    cout << "Nhap so nguyen x can tim: ";
    cin >> x; 
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            dem++;
            xoaPhantu(a, n, i);
            i--;
        }
    }

    if (dem == 0) cout << "\nKhong tim thay x trong mang A!" << endl;
    else {
        cout << "Tim thay x " << dem << " lan" << endl;
        cout << "Mang sau khi xoa toan bo x la: \n";
        xuatmang(a, n);
    }
}
int main() {
    int a[200], n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhapmang(a, n);

    cout << "Mang la: " << endl;
    xuatmang(a, n);

    timKiem(a, n);

    return 0;
}