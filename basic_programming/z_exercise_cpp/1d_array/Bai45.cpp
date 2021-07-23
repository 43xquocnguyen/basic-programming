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
bool checkTang(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return false;
    return true;
}
bool checkGiam(int a[], int n) {
    for (int i = 0; i < n - 1; i++) 
        if (a[i] < a[i + 1])
            return false;
    return true;
}

void kiemtra(int a[],int n) {
    if (checkTang(a, n) == true)
        cout << "Day tang!\n";  
    else if (checkGiam(a, n) == true)
        cout << "Day giam\n";
    else
        cout << "Day khong tang khong giam!";
}

int main() {
    int n, a[200];
    cout << "Nhap so phan tu cua A: ";
    cin >> n;
    nhapmang(a, n);
    xuatmang(a, n);
    kiemtra(a, n);
    return 0;
}