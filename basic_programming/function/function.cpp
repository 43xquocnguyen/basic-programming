#include <iostream>
using namespace std;
 
int Sum(int a, int b) {
    cout << "Argument 1: " << a << endl;
    cout << "Argument 2: " << b << endl;
    return a + b;
}
 
int main() {
    int a = 3;
    int b = 4;
    int sum = Sum(a, b);
    cout << sum << endl;
    return 0;
}