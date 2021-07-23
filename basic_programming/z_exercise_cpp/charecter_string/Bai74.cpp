#include <iostream>
#include <string.h>
using namespace std;
void xoakitu(char *a,int vtx) {
    for (int i = vtx; i < strlen(a); i++) {
        a[i] = a[i + 1];
    }
    a[strlen(a) + 1] = '\0';
}
void Xoa_KT_O_Hai_Dau(char *a) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] != ' ') {
            break;
        }
        else {
            if (a[i] == ' ' && a[i + 1] == ' ') {
                xoakitu(a, i);
                i--;
            }
        }
    }
    if (a[0] == ' ')
        xoakitu(a, 0);

    for (int i = strlen(a); i >= 0; i--) {
        if (a[i] != ' ') {
            break;
        }
        else {
            if (a[i] == ' ' && a[i - 1] == ' ') {
                xoakitu(a, i);
                i++;
            }
        }
    }
    if (a[strlen(a)] == ' ')
        xoakitu(a, strlen(a));
}
void xoa_ki_tu_C(char *a, char c) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == c || a[i] == (c - 32) || (a[i] - 32) == c) {
            xoakitu(a, i);
            i--;
        }
    }
}
int main() {
    char *a = new char[80];
    cout << "Nhap chuoi a:";
    cin.getline(a, 80);

    Xoa_KT_O_Hai_Dau(a);
    cout << "Chuoi sau khi xoa khoang trang o 2 dau:\n";
    cout << a;

    char c;
    cout << "\nNhap vao ki tu c: ";
    cin >> c;
    xoa_ki_tu_C(a, c);

    cout << "Chuoi sau khi xoa ki tu C: \n";
    cout << a << endl;
}