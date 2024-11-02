#include <iostream>
using namespace std;
int main()
{
    int choice,a1,b2,c3;
    cout<<" 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n";
    cout<<"Enter Your Choice Number: ";
    cin>> choice;
    cout<<"Enter Two Numbers: ";
    cin>> a1 >> b2;
    switch(choice)
    {
        case 1:c3=a1+b2;
        break;
        case 2:c3=a1-b2;
        break;
        case 3:c3=a1*b2;
        break;
        case 4:c3=a1%b2;
        break;
    }
    cout<<"Result is: "<<c3;
    return 0;
}