#include <iostream>
using namespace std;

int main() {
    char a;
    int b;
    short int c;
    long int d;
    float e;
    double f;
    wchar_t g;

    cout << "Size of char: " << sizeof(a) << endl;
    cout << "Size of int: " << sizeof(b) << endl;
    cout << "Size of short int: " << sizeof(c) << endl;
    cout << "Size of long int: " << sizeof(d) << endl;
    cout << "Size of float: " << sizeof(e) << endl;
    cout << "Size of double: " << sizeof(f) << endl;
    cout << "Size of wchar_t: " << sizeof(g) << endl;
    
    return 0;
}