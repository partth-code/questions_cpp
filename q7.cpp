//program to print numbers from 1 to 10, but stop the loop when the number reaches 5 using the break statement

#include<iostream>
using namespace std;

int main()
{
    for(int i;i<=10;i++)
    {
        cout<<i<<'\n';
        if(i==5)
        {
            
            break;
        }
    }
    return 0;
}