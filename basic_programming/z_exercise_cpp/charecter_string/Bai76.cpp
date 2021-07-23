#include <iostream>
#include <string.h>
using namespace std;

void huy_n_phantu(char *a, int n, int p) {
    for (; p < strlen(a) - 1; p++) {
        a[p] = a[p + n];
    }
}
int main() {
    char *a = new char[80];
    cout << "Nhap vao chuoi A:";
    cin.getline(a, 80);
    cout << "Chuoi A la: ";
    cout << a << endl;
    int n, p;
    cout << "Nhap vao n va p: ";
    cin >> n >> p;

    huy_n_phantu(a, n, p);
    cout << "Chuoi A sau khi huy la: ";
    cout << a << endl;
    return 0;
}