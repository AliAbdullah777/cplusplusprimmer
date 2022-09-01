#include<iostream>
using namespace std;
struct student
{
    string name;
    int roll_num;
    int marks;

};

int main ()
{ 
    student s1;
    s1.name = "Ali Abdullah";
    s1.roll_num = 546002;
    s1.marks = 912;

    cout<<"marks of " <<s1.name <<" is" << s1.marks;
    return 0;

}
