#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++)
    {
        cout << "Value i = " << i << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "Value i = " << i << " "
                 << "Value j = " << j << endl;
        }
    }
}