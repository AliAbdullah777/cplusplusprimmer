#include<iostream>
using namespace std;
int main ()
{
    int num ;
    cout << "Enter the digit please";
    cin >> num ;
     
    switch (num)
    {
    case (1):
        cout << "ONE" ;
        break;

    case (2):
        cout << "TWO" ;
        break; 

    case (3):
        cout << "THREE" ;
        break;

    case (4):
        cout << "FOUR" ;
        break;

    case (5):
        cout << "FIVE" ;
        break;

    default:
        cout << "ERROR";
        break;
    }

    return 0;

}