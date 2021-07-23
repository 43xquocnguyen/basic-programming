#include <iostream>
#include <string.h>
using namespace std;

void xuatNguoc(char *a) {
    int n = strlen(a);
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i];
    }
}
void inHoa(char *a) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 32;
        }
    }
}
int main() {
    char *s = new char[200];
    cout << "Nhap 1 chuoi: ";
    gets(s);
    cout << "Chuoi la: ";
    puts(s);

    cout << "Chuoi xuat nguoc la: ";
    xuatNguoc(s);
    
    char *s2 = new char[200];
    strcpy(s2, s);
    strrev(s2);

    inHoa(s);
    cout << "\nChuoi sau khi in hoa la: ";
    puts(s);

    
    
    cout << "Chuoi s2: ";
    puts(s2);
}