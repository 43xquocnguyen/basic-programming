#include <iostream>
using namespace std;
 
int main()
{
    
input:
    int number;
    cout << "Enter number: ";
    cin >> number;
     
    if (number > 0){
        cout << "Done!"<< endl;
    }
    else {
        cout << "Invalid" << endl;
        goto input;
    }
     
    return 1;
}