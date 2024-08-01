#include<iostream>
using namespace std;

inline int getMax(int& a ,int& b)
{
    return (a>b) ? a : b;
}
int main()
{
    int a=1,b=2;

    int ans;
    ans=getMax(a,b);
    cout<<ans<<endl;
    a=a+2;
    b=b+2;

    ans=getMax(a,b);
    cout<<ans<<endl;
}