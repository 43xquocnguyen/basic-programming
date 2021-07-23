#include <iostream>
#include <time.h>
using namespace std;

void nhapmatran(int **a, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = -5 + rand() % 10;
        }
    }
}
void xuatmatran(int **a, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
bool KT_MT_Donvi(int **a, int m, int n) {
    for (int i = 0; i < m; i++) {
        if (a[i][i] != 1)
            return false;
    }
    return true;
}
int dem_so0(int **a, int m, int n) {
    int dem = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0)
                dem++;
        }
    }
    return dem;
}
int tongsoduong(int **a, int m, int n) {
    int s = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 0)
                s += a[i][j];
        }
    return s;
}
int tongsoam(int **a, int m, int n) {
    int s = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if (a[i][j] < 0)
                s += a[i][j];
        }
    return s;
}
int main() {
    srand(time(0));
    int n, m;
    cout << "Nhap vao so dong: ";
    cin >> m;
    cout << "Nhap vao so cot: ";
    cin >> n;

    int **a;
    a = new int *[m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
    }

    nhapmatran(a, m, n);
    cout << "Ma tran la:\n";
    xuatmatran(a, m, n);
    if (KT_MT_Donvi(a, m, n)) {
        cout << "A la ma tran don vi\n";
    }
    else {
        cout << "A khong phai la ma tran don vi\n";
    }
    cout << "So la xuat hien cua so 0 la: " << dem_so0(a, m, n) << endl;

    cout << "Tong cac so duong la: " << tongsoduong(a, m, n) << endl;
    cout << "Tong cac so am la: " << tongsoam(a, m, n) << endl;
    
}