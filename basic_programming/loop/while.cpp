#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i != 10)
    {
        cout << "Value i = " << i << endl;
        i++;
    }

    i = 0;
    while (i != 10)
    {
        int j = 0;
        cout << endl;
        while (j != 10)
        {
            cout << "Value i = " << i << " "
                 << "Value j = " << j << endl;
            j++;
        }
        i++;
    }
}