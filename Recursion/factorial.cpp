#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;

    int chotti=factorial(n-1);
    int baddi=n*chotti;

    return baddi;
}
int main()
{
    int n;
    cin>>n;

    cout<<factorial(n);
}