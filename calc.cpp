#include <iostream>
using namespace std;
int main()
{
    int choice,a,b,c;
    cout<<"Enter Your Choice:\n 1.Add\n 2.Sub\n 3.Div\n 4.Multi\n";
    cin>>choice;
    cout<<"Enter Two Number: ";
    cin>>a>>b;
    switch (choice)
    {
    case 1:c=a+b; 
    break;
    case 2:c=a-b; 
    break;
    case 3:c=a%b; 
    break;
    case 4:c=a*b; 
    break;
    }
    cout<<"Result is: "<<c;
    return 1;
}