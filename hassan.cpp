#include <iostream>
using namespace std;
int main()
{
    int val1=0,val2=0;
    cout << "input two numbers:" <<endl;
    cin >> val1 >> val2;
    if(val1>=val2)
    {
        while(val1>=val2)
            cout << val2++ << endl;
    }
    else
    {
        while(val2>=val1)
            cout << val1++ << endl;
    }
    return 0;
}