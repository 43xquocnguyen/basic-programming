#include <iostream>
#include <string.h>
using namespace std;

int dodaichuoi(char *a) {
    int i = 0;
    while(a[i] != '\0') {
        i++;
    }
    return i;
}
int chucaiA(char *a) {
    int dem = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == 'a') {
            dem++;
        }
    }
    return dem;
}
int demsokt(char *a) {
    int dem = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (isspace(a[i])) {
            dem++;
        }
    }
    return dem;
}
void vitrikhoangtrang(char *a) {
    for (int i = 0; i < strlen(a); i++) {
        if (isspace(a[i])) {
            cout << i << "\t";
        }
    }
}
int main() {
    char *a = new char[200];
    cout << "Nhap vao chuoi a: ";
    cin.getline(a, 199);

    cout << "Chuoi a la: ";
    cout << a << endl;

    cout << "Do dai chuoi a la: ";
    cout << dodaichuoi(a) << endl;

    if (chucaiA(a) == 0) {
        cout << "Chuoi khong co ki tu 'a'" << endl;
    }
    else {
        cout << "Chuoi co " << chucaiA(a) << " ki tu 'a'" << endl;
    }
    cout << "So khoang trang la: " << demsokt(a) << endl;

    cout << "Vi tri khoang trang: ";
    vitrikhoangtrang(a);
}