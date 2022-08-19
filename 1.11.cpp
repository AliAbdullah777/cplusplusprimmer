#include <iostream>
using namespace std;

int main()
{
    int small , big ;
    cout << "Please input 2 integers: ";
    cin >> small >> big;
    while(small <= big)
    {
        cout << small << endl;
        ++small;
    }

    return 0;
    
} 