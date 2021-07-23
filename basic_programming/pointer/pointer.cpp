#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;
    p = &a;

    cout << "Address a: " << &a << endl;
    cout << "Value pointer p: " << p << endl;
    cout << "Address pointer p: " << &p << endl;
    cout << "Value a: " << a << endl;
    cout << "Value a (*p): " << *p << endl;

    p = NULL;

    return 0;
}