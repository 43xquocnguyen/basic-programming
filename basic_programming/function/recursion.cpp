#include <iostream>  
using namespace std;
 
void Show(int x) {
    if (x == 0) {
        return;
    }
    cout << x << endl;
    Show(x - 1);
}
 
int main() {
    int x = 10;
    Show(x);
    return 0;  
}