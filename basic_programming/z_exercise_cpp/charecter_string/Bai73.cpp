#include <iostream>
#include <string.h>
using namespace std;
string ITOA(int a) {
    string ss="";
    while(a) {
        int x=a%10;
        a/=10;
        char i='0';
        i=i+x;
        ss=i+ss;
    }
    return ss;
}
int main() {
    int i;
    cout << "Nhap so nguyen i: ";
    cin << i;

    string k = ITOA(i);
    puts(k);
}