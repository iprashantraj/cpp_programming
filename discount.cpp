#include <iostream>
using namespace std;
int main()
{
    int amount,price,discount;
    cout<<"Enter the Amount";
    cin>>amount;
    if (amount>=5000)
    {
      discount=amount*(20.0/100);
    }
    else if (2000<=amount && amount<5000)
    {
     discount=amount*(10.0/100);
    }
    else
    {
     discount=amount*(5.0/100);
    }
    price=amount-discount;
    cout<<price;
} 
