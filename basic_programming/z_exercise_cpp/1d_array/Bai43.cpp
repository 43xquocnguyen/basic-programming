#include <iostream>
using namespace std;

void nhap(int a[], int n) {
    cout << "Gia tri nhap tu 0 -> 100" << endl;
    for (int i = 0; i < n; i++) {
        do {
            cout << "Nhap a[" << i << "]: ";
            cin >> a[i];
            if (a[i] < 1 || a[i] > 100)
                cout << "Gia tri sai! ";
        } while (a[i] < 1 || a[i] > 100);
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Gia tri a[" << i << "] = " << a[i] << endl;
    }
}
float TBC(int a[], int n) {
    float S = 0;
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0) {
            dem++;
            S += a[i];
        }
    }
    return S / dem;
}
int main(){
    int n, a[200];
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhap(a, n);
    xuat(a, n);
    cout << "TBC cac so chan = " << TBC(a, n);
}