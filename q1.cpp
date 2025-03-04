//To check weather a number is prime or not
#include<iostream>
using namespace std;

int main()
{

    int num;
    bool prime = true;

    cout<<"Enter a number: ";
    cin>>num;
    
    for(int i = 2;i<=num;i++)
    {
        if(num%i==0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
    {
        cout<<num<<" is a prime number";
    }
    else
    {
        cout<<num<<" is not a prime number";
    }

    return 0;
}