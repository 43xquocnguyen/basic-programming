#include <iostream>
#include <string.h>
using namespace std;

int So_Chu_Thuong(char *a) {
    int dem = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (islower(a[i])) dem++;
    }
    return dem;
}
int So_Chu_Hoa(char *a) {
    int dem = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (isupper(a[i])) dem++;
    }
    return dem;
}
int Ki_Tu_Khac(char *a) {
    int dem = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (isdigit(a[i])) dem++;
    }
    return dem;
}
bool KTDX(char *a) {
    for (int i = 0; i < strlen(a) / 2; i++) {
        if (a[i] != a[strlen(a) - i - 1])
            return false;
    }
    return true;
}
int Tong_Ma_ASCII(char *a) {
    int S = 0;
    for (int i = 0; i < strlen(a); i++) {
        S = S + a[i];
    }
    return S;
}
int main() {
    char *a = new char[200];
    cout << "Nhap vao chuoi a:";
    cin.getline(a, 200);
    cout << "Chuoi la: ";
    cout << a << endl;

    cout << "So chu thuong: " << So_Chu_Thuong(a) << endl;
    cout << "So chu hoa: " << So_Chu_Hoa(a) << endl;
    cout << "So ki tu khac: " << Ki_Tu_Khac(a) << endl;

    if (KTDX(a)) {
        cout << "Chuoi doi xung!\n";
    }
    else {
        cout << "Chuoi khong doi xung!\n";
    }

    cout << "Tong ma ASCII = " << Tong_Ma_ASCII(a) << endl;
}