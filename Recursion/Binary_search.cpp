#include<iostream>
using namespace std;
bool binarySearch(int arr[],int start,int end,int key)
{
    if(start>end)
    {
        return false;
    }
    int mid =start+(end-start)/2;
    if(arr[mid]==key)
    {
        return true;
    }
   
    if(arr[mid]<key)
    {
    binarySearch(arr,mid+1,end,key);
    }
    else{
        binarySearch(arr,start,mid-1,key);
    }
    
}
int main()
{
    int arr[]={2,3,4,5,6,7};
    int size=6;
    int key=7;
    int start=0;
    int end=size-1;
    cout<<binarySearch(arr,start,end,key);
}