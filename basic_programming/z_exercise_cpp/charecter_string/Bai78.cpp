#include <iostream>
#include <string.h>
using namespace std;

char *chen_s2vaos1(char *s1, char *s2, int k) {
    char *c = new char[200];
    strncpy(c, s1, k);
    strcat(c, s2);
    return c;
}
int main() {
    char *s1 = new char[200];
    char *s2 = new char[200];
    cout << "Nhap vao chuoi s1: ";
    cin.getline(s1, 200);
    cout << "Nhap vao chuoi s2: ";
    cin.getline(s2, 200);

    cout << "Chuoi s1 la: " << s1 << endl;
    cout << "Chuoi s2 la: " << s2 << endl;

    int k;
    cout << "Nhap vi tri k: ";
    cin >> k;
    char *c = chen_s2vaos1(s1, s2, k);

    cout << "Chuoi s3 la: " << c << endl;

    return 0;
}