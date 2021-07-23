#include <iostream>
using namespace std;

int main() {
    int a = 3;

    if (a < 3) {
        cout << "a less than 3" << endl;
    }
    else if (a > 3 && a < 20) {
        cout << "a more than 3 and less than 20" << endl;
    }
    else {
        cout << "a more than 20" << endl;
    }
}