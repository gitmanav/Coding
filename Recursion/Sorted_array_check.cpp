#include<iostream>
using namespace std;


bool isSorted(int arr[],int size)
{
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
    bool remaining= isSorted(arr+1,size-1);
    return remaining;
    }
}
int main()
{
    int arr[]={1,3,7,7,7};
    int size=5;

    bool ans=isSorted(arr,size);
    cout<<ans;
    return 0;
}