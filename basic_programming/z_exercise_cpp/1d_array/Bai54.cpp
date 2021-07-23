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
void somangcon(int a[], int n) {
    int dem = 0, dem2 = 0, vt = 0;
    int max = dem;
    for (int i = 0; i < n; i++) {
        dem = 0;
        while (a[i] < a[i + 1]) {
            dem++;
            i++;
            
        }
        if (dem != 0) {
            dem2++;
        }
    }
    cout << "So mang con la: " << dem2 << endl;
    cout << "Mang con dai nhat la: " << endl;
    for (int q = vt; q < dem; q++) {
        cout << a[q] << "\t";
    }
}
int main() {
    srand(time(0));
    int a[100];
    int i, n, dem = 0;
    cout << "Nhap so phan tu cua mang:";
    cin >> n;

    nhapmang(a, n);
    cout << "Mang la: \n";
    xuatmang(a, n);

    cout << "So mang con co trong mang A la:\n";
    somangcon(a, n);
    

}