#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"Enter Hours";
    cin>>hour;
     if (hour>=9 && hour<=18)
     {
        cout<<"Working";
     }
     else
     {
        cout<<"Resting";
     }
     
    return 0;
    
}