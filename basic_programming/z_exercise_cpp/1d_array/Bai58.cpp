#include <iostream>
#include <time.h>
using namespace std;
bool Chu_So_SXT(int n) {
    while (n != 0) {
        int t = n % 10;
        int k = (n / 10) % 10;
        if (k > t)
            return false;
        n /= 10;
    }
    return true;
}
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0 + rand() % 100;
    }
}
void xuatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
}
int demSO_sap_tang(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (Chu_So_SXT(a[i]))
            dem++;
    }
    return dem;
}
int main() {
    srand(time(NULL));
    int a[200];
    int n;
    cout << "Nhap so phan tu cua A: ";
    cin >> n;

    nhapmang(a, n);
    cout << "Mang la: \n";
    xuatmang(a, n);

    cout << endl
         << "So chu so tang trong mang la: " << demSO_sap_tang(a, n);
}