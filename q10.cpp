//a program to find the factorial of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num,fac = 1;

    cout<<"Enter number you want factorial for: ";
    cin>>num;
    fac = 1;

    if(num==1||num==0)
    {
        cout<<"Fsctorial for the give nnumber is: "<<fac;
    }
    else
    {
        for(int i = num; i>=1; i--)
        {
            fac = fac*i;
        }
        
        cout<<"Fsctorial for the give nnumber is: "<<fac;

    }
    return 0;
}