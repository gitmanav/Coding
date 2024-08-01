#include<iostream>
using namespace std;
void update(int n) //pass by value
{
    n++;
}

void update2(int &n) //pass by reference
{
    n++;
}
int main()
{
    // int i=1;
    // int &j=i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // i++;
    // cout<<j<<endl;
    int n=1;
    cout<<"Before: "<<n<<endl;
    update2(n);
    cout<<"After: "<<n<<endl;

}