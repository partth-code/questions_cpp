//finding max out of 3 numbers

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    cout<<"The maximum number among the three is: "<<max(max(a,b),c);


    return 0;
}