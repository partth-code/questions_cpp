//To check if a number is odd or even via switch case
#include<iostream>
using namespace std;

int main()
{
    int num,check;

    cout<<"Enter a number: ";
    cin>>num;

    check = num%2;

    switch(check)
    {
        case 0:
            cout<<"The number is even";
            break;
        default:
            cout<<"The number is odd";
            break;
    }
    return 0;
}