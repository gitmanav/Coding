#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }

}