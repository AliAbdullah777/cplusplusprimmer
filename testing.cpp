#include <iostream>
using namespace std;
int main()
{
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to 10
    while (val <= 100 )
    {
        sum += val;  // assigns sum + val to sum
        ++val;       // add 1 to val
    }
    cout<<"sum of 1 to 100 =" // added 
        << sum<<endl;
        
 
     return 0;   
}