#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;

    int i=1;
    int val=1;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<val<<" ";
            val=val+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}