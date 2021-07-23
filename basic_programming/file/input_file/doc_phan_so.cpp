#include <iostream>
#include <fstream>
using namespace std;

struct PHANSO {
    int tu, mau;
};
void DocFile(PHANSO a[], int &n, istream &is) {
    while (is.fail() == false) {
        n++;
        is >> a[n].tu;
        char x;
        is >> x;
        is >> a[n].mau;
    }
}
void Xuat(PHANSO a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].tu << "/" << a[i].mau << endl;
    }
}
int UCLN(int a, int b) {
    if (a < 0) {
        a = abs(a);
    }
    if (b < 0) {
        b = abs(b);
    }
    while(a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a; 
}
void Rutgonphanso(PHANSO a[], int n) {
    for (int i = 0; i < n; i++) {
        int k = UCLN(a[i].tu, a[i].mau);
        a[i].tu /= k;
        a[i].mau /= k;
    }
}
int MAX(PHANSO a[], int n) {
    int vt = 0;
    float max = (float) a[0].tu / a[0].mau;
    for (int i = 0; i < n; i++) {
        float kq = (float) a[i].tu / a[i].mau;
        if (kq > max) {
            max = kq;
            vt = i;
        }
    }
    return vt;
}
void GhiFile(PHANSO a[], int n, ostream& os) {
    for (int i = 0; i < n; i++) {
        os << a[i].tu << "/" << a[i].mau << "\t";
    }
    os << "\nPhan so lon nhat la: ";
    os << a[MAX(a, n)].tu << "/" << a[MAX(a, n)].mau;
}
int main() {
    PHANSO arr[100];
    int n = -1;

    ifstream is;
    is.open("phan_so.txt", ios_base::in);
    DocFile(arr, n, is);
    is.close();

    Rutgonphanso(arr, n);

    ofstream os;
    os.open("phan_so.txt", ios_base::app);
    os << "\nPHAN SO SAU KHI RUT GON\n";
    GhiFile(arr, n, os); // bao gồm cả MAX
    os.close();

    return 0;
}