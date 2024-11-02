#include <iostream>
using namespace std;
int main ()
{
    int a,sum;
    cout<<"Enter any 5 digit number";
    cin>>a;
    sum=(a/10000)+(a/1000)%10+(a/100)%10+(a/10)%10+a%10;
    cout<<"Sum is "<<sum;
    return 0;
}