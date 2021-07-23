#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do
    {
        cout << "Value i = " << i << endl;
        i++;
    } while (i != 10);

    i = 0;
    do
    {
        int j = 0;
        do
        {
            cout << "Value i = " << i << " "
                 << "Value j = " << j << endl;
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);
}