#include<iostream>
using namespace std;

//Tail Recursion

int reverse(int n)
{
    if(n==0)
    {
        return 1 ;
    }
    cout<<n<<" ";
    reverse(n-1); 
}

//Head Recursion

int reverse1(int n)
{
    if(n==0)
    return 1;

    reverse1(n-1);

    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;

    reverse(n);
    cout<<endl;
    reverse1(n);


}