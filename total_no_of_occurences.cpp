#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n, int key)
{
    int ans=-1;
    int start=0,end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurence(int arr[],int n, int key)
{
    int ans=-1;
    int start=0,end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int totalOccurence=0;
    int arr[8]={2,3,3,3,3,3,3,2};
    int key=3;
    // totalOccurence=(lastOccurence(arr,8,3)-firstOccurence(arr,8,3))+1;
    cout<<firstOccurence(arr,8,3)<<endl;
    cout<<lastOccurence(arr,8,3)<<endl;
    cout<<"Total Occurence of 3 in given array is: "<<totalOccurence;
}