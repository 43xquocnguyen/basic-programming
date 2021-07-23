#include <iostream>
#include <time.h>
using namespace std;

void nhapmatran(int **a, int m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}
void xuatmatran(int **a, int m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
int tongsoduong(int **a, int m, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (a[i][j] > 0)
                s += a[i][j];
        }
    return s;
}
bool mot_hang_tangdan(int **a, int m, int n) {
    bool c = true;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[i][j] < a[i][j + 1]) {
                c = true;
            }
            else {
                c = false;
                break;
            }
        }
        if (c == true)
            return true;
    }
    return false;
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

    cout << "Tong cac so duong la: " << tongsoduong(a, m, n) << endl;

    cout << mot_hang_tangdan(a, m, n);
}