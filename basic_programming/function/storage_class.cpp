#include <iostream>  
using namespace std;
 
int main() {
    auto x = 3.5;
    static int y = 3;
    extern int z;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;  
}