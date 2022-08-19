#include<iostream>
using namespace std ;
int main ()
{
    char op;
    int num1 , num2 ;
    cout << "Enter the operator: + , - , * , / ";
    cin >> op ;
    
     cout <<"--------------------------------------------------------------"<<endl;

    cout << "Enter the two number";
    cin >> num1 >> num2;

     cout <<"--------------------------------------------------------------"<<endl;

    switch (op)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;

     cout <<"--------------------------------------------------------------"<<endl; 

    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;

     cout <<"--------------------------------------------------------------"<<endl;

    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;

     cout <<"--------------------------------------------------------------"<<endl;

    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
     
     cout <<"--------------------------------------------------------------"<<endl;
     default:
        cout << " Error!! the operator is not correct";
        break;
    }
    return 0;


}