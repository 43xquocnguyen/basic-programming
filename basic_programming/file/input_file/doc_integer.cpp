#include <iostream>
#include <fstream>
using namespace std;

void Docfile(int a[], int &n, int &m, istream &is) {
    char x;
    while (x != '\n') {
        is >> x;
    }
    is >> n;
}
void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
}
int main() {
    ifstream is;
    is.open("integer.txt", ios_base::in);

    int a[100];
    int n, m;

    Docfile(a, n, m, is);

    return 0;
}