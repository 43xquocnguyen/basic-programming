#include <iostream>
#include <fstream>
using namespace std;

// đọc mảng mỗi pt cách 1 dấu phẩy
void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
}

int UCLN(int a, int b) {
    if (a < 0) {
        a *= -1;
    }
    if (b < 0) {
        b *= -1;
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}
int UCLNcuamang(int a[], int n) {
    int kq = a[0];
    for (int i = 1; i < n; i++) {
        kq = UCLN(kq, a[i]);
    }
    return kq;
}

int BCNN(int a, int b) {
    int max = a >= b ? a : b;
    for (int i = max; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}
int BCNNcuamang(int a[], int n) {
    int kq = a[0];
    for (int i = 1; i < n; i++) {
        kq = BCNN(kq, a[i]);
    }
    return kq;
}

void DocFile(int a[], int &n, ifstream &b) {
    while (b.fail() == false) {
        b >> a[n];
        char x;
        b >> x;
        n++;
    }
}

int main() {
    int arr[100], n = 0;

    ifstream fileDoc;
    fileDoc.open("BCLN_UCNN_mang.txt", ios_base::in); // mở để đọc
    DocFile(arr, n, fileDoc); // đọc File
    fileDoc.close(); // đóng File

    ofstream fileGhi;
    // fileGhi.open("BCLN_UCNN_mang.txt", ios_base::out); // mở để đọc lại
    fileGhi.open("BCLN_UCNN_mang.txt", ios_base::app); // mở để đọc thêm

    fileGhi << "\nUoc chung lon nhat la: " << UCLNcuamang(arr, n) << endl;
    fileGhi << "Boi chung nho nhat la: " << BCNNcuamang(arr, n) << endl;
    fileGhi.close();

    return 0;
}