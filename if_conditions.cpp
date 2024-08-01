#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character\n";
    cin>>ch;

    if(ch>=97 && ch<=122)
    {
        cout<<"It is in lowercase";
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"It is in upper-case\n";
    }
    else if(ch>=48 && ch<=57){
        cout<<"It is numeric\n";
    }
    else{
        cout<<"It is special character\n";
    }
    return 0;
}