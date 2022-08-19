#include <iostream>
using namespace std;
int main()
{
    cout<<"Exercise 1.9\n";

     int sum = 0, val =50;
     while (val <= 100)
    {  
        sum += val;
        ++ val;
    }
    cout<<"sum of 50 to 100 = "<<sum<<endl;


    
    cout<<"Exercise 1.10\n";
    int num = 10;
	while(num >= 0)
	{
		cout << num << endl;
		--num;
	}


    cout<<"Exerciser 1.11";
  int small = 0, big = 0;
    cout << "Please input 2 integers: ";
    cin >> small >> big;
    while(small <= big)
    {
        cout << small << endl;
        ++small;
    }

    int age ;
    cout<<"Enter the age "<<endl;
    cin >> age ;
    if (age >= 15)
    {
        cout << "The age is correct"<<endl;
    }
    

    return 0;
}