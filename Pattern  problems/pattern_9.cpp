#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;

    int row=1;
    char ch='A';
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<ch<<" ";
            ch=ch+1;
            col=col+1;
        }
        row=row+1;
        cout<<endl;
    }
    return 0;
}