#include<iostream>
using namespace std;

int sum(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    int total =arr[size-1]+sum(arr,size-1);
    return total;
}
int main()
{
    int arr[]={1,2,3,4,5,4,0};
    int size=7;
    cout<<sum(arr,size);
}