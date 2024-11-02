#include <iostream>
using namespace std;
int main ()
{
    int m1,m2,m3;
    float avg;
    cout<<"Enter Marks of all three subject: ";
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3.0;
    if (avg>=60)
    {
        cout<<"Grade A"<<endl;
    }
    else if (avg>=35 && avg<60)
    {
        cout<<"Grade B"<<endl;
    }
    else
    {
        cout<<"Grade C"<<endl;
    }
    return 0;
}