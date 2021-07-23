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
void gopxenke(int a[], int b[], int n, int c[]) {
    int j = 0, k = 0;
    for (int i = 0; i < n * 2; i++) {
        if (i % 2 == 0) {
            c[i] = a[j];
            j++;
        }
        else if (i % 2 != 0) {
            c[i] = b[k];
            k++;
        }
    }
}
void xoaphantu(int c[],int &n, int vtx) {
    for (int i = vtx; i < n - 1; i++) {
        c[i] = c[i + 1];
    }
    n--;
}
void xoa_PT_giong(int c[], int &k) {
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (c[i] == c[j])
                xoaphantu(c, k, j);
        }
    }
}
int main() {
    srand(time(NULL));
    int a[200], b[200], c[200], n;
    cout << "Nhap so phan tu cho mang:";
    cin >> n;
    nhapmang(a, n);
    nhapmang(b, n);
    cout << "Mang A la:\n";
    xuatmang(a, n);
    cout << "Mang B la:\n";
    xuatmang(b, n);

    gopxenke(a, b, n, c);
    cout << "Mang xen ke A va B la: \n";
    int k = n * 2;
    xuatmang(c, k);

    xoa_PT_giong(c, k);
    cout << "Mang sau khi phan tu giong nhau: \n";
    xuatmang(c, k);
    return 0;
}