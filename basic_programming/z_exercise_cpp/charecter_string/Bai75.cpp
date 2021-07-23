#include <iostream>
#include <string.h>
using namespace std;

void xoakitu(char *a,int vtx) {
    for (int i = vtx; i < strlen(a); i++) {
        a[i] = a[i + 1];
    }
    a[strlen(a) + 1] = '\0';
}
void xoa_kt_thua(char *a) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ' && a[i + 1] == ' ') {
            xoakitu(a, i);
            i--;
        }
    }
    if (a[0] == ' ')
        xoakitu(a, 0);
    if (a[strlen(a)] == ' ')
        xoakitu(a, strlen(a));
}
int dem_tu(char *a) {
    int dem = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ') {
            dem++;
        }
    }
    dem++;
    return dem;
}
void dinhDang(char *a) {
    for (int i = 0; i < strlen(a) - 1; i++) {
        if (a[i - 1] == ' ') {
            if (a[i] >= 'a' && a[i] <= 'z') {
                a[i] = a[i] - 32;
            }
        }
        else {
            if (a[i] >= 'A' && a[i] <= 'Z') {
                a[i] = a[i] + 32;
            }
        }
    }
    if (a[0] >= 'a' && a[0] <= 'z') {
                a[0] = a[0] - 32;
            }
}
int main() {
    char *a = new char[80];
    cout << "Nhap chuoi a: ";
    cin.getline(a, 80);
    cout << "Chuoi la: \n";
    cout << a << endl;


    xoa_kt_thua(a);
    cout << "Chuoi sau khi xoa khoang trang thua: \n";
    cout << a << endl;

    cout << "So tu trong chuoi la: " << dem_tu(a);

    dinhDang(a);
    cout << "Chuoi sau khi dinh dang la: \n";
    cout << a << endl; 
}