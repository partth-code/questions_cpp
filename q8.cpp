//program to print numbers from 1 to 20, but skip the numbers 7,11,17 using the continue statement

#include<iostream>
using namespace std;

int main()
{
    for(int i = 1;i<=20;i++)
    {
        cout<<i<<'\n';
        if(i==7||i==10||i==17)
        {
            continue;
        }
    }
    return 0;
}