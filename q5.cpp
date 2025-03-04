//to find the greatest common divisor of two numbers

#include <iostream>
#include <numeric> //important to use gcd
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Greatest common divisor of two numbers will be: ",gcd(a,b);
    return 0;
}