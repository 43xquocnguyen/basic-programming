#include <iostream>
using namespace std;

int main() {
    int a = 3;

    switch (a)
    {
        case 1: {
            cout << "a = 1" << endl;
            break;
        }
        case 2: {
            cout << "a = 2" << endl;
            break;
        }
        case 3: {
            cout << "a = 3" << endl;
            break;
        }
        default: {
            cout << "a undifined" << endl;
        }
    }
}