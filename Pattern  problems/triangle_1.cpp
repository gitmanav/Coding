#include<iostream> 
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;

    int i=1;

    while(i<=n)
    {
        int col=1;
        int val=i;

        while(col<=i)
        {
            cout<<val<<" ";
            val=val+1;
            col=col+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}