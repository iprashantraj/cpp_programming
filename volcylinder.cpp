#include <iostream>
using namespace std;
int main()
{
    int radius,height;
    float area;
    cout<<"Enter Radius and Height";
    cin>>radius>>height;

    area=(float) 22/7*radius*radius*height;

    cout<<"The Area is"<<area;
    return 0;
}