#include <iostream>
using namespace std;
#define N 135

int main() {
    int x, y, z;
    cout << "Cac nghiem cua phuong trinh 3x + 5y + 7z = 135 la:";
    for (x = 0; x < N / 3; x++)
        for (y = 0; y < (N / 5); y++)
            for (z = 0; z < (N / 7); z++)
                if (3 * x + 5 * y + 7 * z == N)
                    cout << "x = " << x << " ; y = " << y << " ; z = " << z << endl;
    return 0;
}
