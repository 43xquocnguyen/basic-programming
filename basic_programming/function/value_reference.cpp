#include <iostream>  
using namespace std;
 
void Swap_Reference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}  
void Swap_Value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
 
int main() {
    int x = 3;
    int y = 4;
    Swap_Value(x, y);
    cout << "After swap value x = " << x << endl;
    cout << "After swap value y = " << y << endl;
    Swap_Reference(x, y);
    cout << "After swap reference x = " << x << endl;
    cout << "After swap reference y = " << y << endl;
    return 0;  
}