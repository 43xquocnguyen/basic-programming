#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char *s1 = new char[200];
    char *s2 = new char[200];
    char *s3 = new char[200];
    cout << "Nhap vao chuoi s1: ";
    cin.getline(s1, 200);
    cout << "Nhap vao chuoi s2: ";
    cin.getline(s2, 200);

    cout << "Chuoi s1 la: " << s1 << endl;
    cout << "Chuoi s2 la: " << s2 << endl;

    strcat(s1, s2);
    strcpy(s3, s1);
    cout << "Chuoi s3 sau khi noi 2 chuoi s1, s2 la: " << s3 << endl;

    return 0;
}