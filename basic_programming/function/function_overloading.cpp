#include <iostream>  
using namespace std;
 
int Max(int x, int y) {
    if (x >= y) {
        return x;
    }
    return y;
}  
int Max(float x, float y) {
    if (x >= y) {
        return x;
    }
    return y;
}  
 
int main() {
    int x = 3, y = 4;
    float xfloat = 3, yfloat = 4.5;
    cout << "Max int: " << Max(x, y) << endl;
    cout << "Max float: " << Max(xfloat, yfloat) << endl;
    return 0;  
}