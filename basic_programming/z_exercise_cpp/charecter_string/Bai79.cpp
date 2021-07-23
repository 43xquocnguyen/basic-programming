#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char *s = new char[200];
    cout << "Nhap vao chuoi s1: ";
    cin.getline(s, 200);

    cout << "Chuoi s la: " << s << endl;

    char c;
    cout << "Nhap vao 1 ki tu c: ";
    cin >> c;

    cout << strchr(s, c);
    return 0;
}