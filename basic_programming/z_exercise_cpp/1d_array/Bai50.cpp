#include <iostream>
#include <time.h>
using namespace std;

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 1 + rand() % 100;
    }
}
void xuatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
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
void sapGiam(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
}
void Sapxep(int a[], int n) {
    int sole[50], sochan[50], j = 0, k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sole[j] = a[i];
            j++;
        }
        else if (a[i] % 2 == 0) {
            sochan[k] = a[i];
            k++;
        }
    }
    sapTang(sole, j);
    sapGiam(sochan, k);
    
    int result[j + k];
    for (int l = 0; l < j; l++) {
        result[l] = sole[l];
    }
    int z = 0;
    for (int m = j; m < j + k; m++) {
        result[m] = sochan[z];
        z++;
    }
    xuatmang(result, j + k);
}

int main() {
    srand(time(NULL));
    int a[200], n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhapmang(a, n);

    cout << "Mang la: " << endl;
    xuatmang(a, n);

    cout << "Mang sau khi sap xep la:" << endl;
    Sapxep(a, n);

    return 0;
}