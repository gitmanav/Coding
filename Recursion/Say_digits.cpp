#include<iostream>
using namespace std;

void Saydigit(int n,string arr[])
{
    if(n==0)
    return;

    int digit=n%10;
    n=n/10;
    
    
    Saydigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main()
{
    int n;
    cin>>n;
    string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
    Saydigit(n,arr);
}