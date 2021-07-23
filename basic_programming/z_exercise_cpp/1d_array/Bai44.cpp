#include <iostream>
using namespace std;

void nhap(int a[], int n) {
    cout << "Gia tri nhap tu a[i] <= 100" << endl;
    for (int i = 0; i < n; i++) {
        do {
            cout << "Nhap a[" << i << "]: ";
            cin >> a[i];
            if (a[i] > 100)
                cout << "Gia tri sai! ";
        } while (a[i] > 100);
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Gia tri a[" << i << "] = " << a[i] << endl;
    }
}
float TBCsochan(int a[],int n) {
    float S = 0;
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0) {
            dem++;
            S += a[i];
        }
    }
    if (dem == 0)
        return 0;
    return S / dem;
}
float TBCsoduong(int a[],int n) {
    float S = 0;
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] >= 0) {
            dem++;
            S += a[i];
        }
    }
    if (dem == 0)
        return 0;
    return S / dem;
}
float TBCsoam(int a[],int n) {
    float S = 0;
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0) {
            dem++;
            S += a[i];
        }
    }
    if (dem == 0)
        return 0;
    return S / dem;
}
bool laSNT(int n) {
    int dem = 0;
    if (n == 1 || n == 2||n == 3)
        return true;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            dem++;
        }
    }
    if (dem == 2)
        return true;
    return false;
}
void inSNT(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if(laSNT(a[i]) == true)
            cout << a[i] << "\t";
    }
}
void sapxepsochan(int a[], int n) { 
	cout<<"\nMang sap xep phan tu chan tang dan: \n";
    int c[200], k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2  == 0) {
            c[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (c[i] > c[j]){
                swap(c[i], c[j]);
            }

    for (int i = 0; i < k; i++) {
        cout << c[i] << "\t";
    }
}
int main(){
    int n, a[200];
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhap(a, n);
    xuat(a, n);
    cout << "TBC cac so chan = " << TBCsochan(a, n) << endl;
    cout << "TBC cac so duong = " << TBCsoduong(a, n) << endl;
    cout << "TBC cac so am = " << TBCsoam(a, n) << endl;
    cout << "Cac so nguyen to trong mang la: ";
    inSNT(a, n);
    sapxepsochan(a, n);

}