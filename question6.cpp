//to calculate length of a string

#include<iostream>
using namespace std;

int main()
{
    string sen;

    cout<<"Enter a stirng: ";
    getline(cin,sen);

    int len_str = 0;

    for(char i : sen)
    {
        len_str+=1;
    }

    cout<<"The length of the string is: "<<len_str;
    return 0;
}