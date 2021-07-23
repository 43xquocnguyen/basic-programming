#include <iostream>
using namespace std;

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]:";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Gia tri a[" << i << "] = " << a[i] << endl;
    }
}
int SCmax(int a[], int n){
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int SLmin(int a[], int n){
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0 && a[i] < min){
            min = a[i];
        }
    }
    return min;
}
int main(){
    int n, a[200];
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhap(a, n);
    xuat(a, n);
    cout << "So chan max: " << SCmax(a, n) << endl;
    cout << "So le min: " << SLmin(a, n) << endl;
}