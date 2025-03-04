#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    int num_g = max(a,b);
    int num_l = min(a,b);
/* 
    while (num_l !=0)
    {
        num_g = num_g^num_l;
        num_l = num_g^num_l;
        num_g = num_g^num_l;

        num_l = num_l%num_g;

    }
*/   
    while (num_l != 0)
    {
        int temp = num_l;
        num_l = num_g%num_l;
        num_g = temp;
    }    

    return num_g;
}

int main()
{
    int a,b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Grestest common divisor of specified numbers is: "<<GCD(a,b);


    return 0;
}