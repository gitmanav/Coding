#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number\n";

    cin>>n;

    int row=1;

    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<char('A'+col-1)<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}