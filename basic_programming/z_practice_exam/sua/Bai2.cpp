#include <iostream>
using namespace std;
#define MAX 100

void Nhap_Ma_Tran(int a[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}
void Xuat_Ma_Tran(int a[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
int Max(int a[][MAX], int n) {
    int max = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}
int Min(int a[][MAX], int n) {
    int min = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}
void HoanVi(int &a, int &b) {
    int t = b;
    b = a;
    a = t;
}
void Doi_Doi_Xung(int a[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            HoanVi(a[i][j], a[i][n - 1 - j]);
        }
    }
}
int main() {
    int a[MAX][MAX];
    int n;
    cout << "Nhap vao cap cua ma tran: ";
    cin >> n;
    Nhap_Ma_Tran(a, n);
    cout << "Ma tran la: \n";
    Xuat_Ma_Tran(a, n);
    cout << endl;
    cout << "Gia tri lon nhat cua ma tran la: " << Max(a, n) << endl;
    cout << "Gia tri nho nhat cua ma tran la: " << Min(a, n) << endl;
    cout << endl;
    cout << "Ma tran sau khi lay doi xung qua truc doc cua ma tran la: \n";
    Doi_Doi_Xung(a, n);
    Xuat_Ma_Tran(a, n);

}