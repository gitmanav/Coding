#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:\n";
    cin>>n;

    int row=1;

    while(row<=n)
    {
        int col=1;
        char start=char('A'+n-row);
        while(col<=row)
        {
            cout<<start<<" ";
            col=col+1;
            start=start+1;

        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}