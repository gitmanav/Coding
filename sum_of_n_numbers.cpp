#include<iostream> 
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number upto which you wants a sum\n";
    cin>>n;

    int sum=0;
    int i=1;

    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum is: "<<sum;
    return 0;

}