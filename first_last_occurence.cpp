#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n, int key)

{
    int s=0,e=n-1;
    int ans =-1;
    int mid= s+ (e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccurence(int arr[],int n, int key)

{
    int s=0,e=n-1;
    int ans =-1;
    int mid= s+ (e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[5]={1,2,3,3,5};

    cout<<"First Occurence of 2 is : "<<firstOccurence(arr,5,3)<<endl;
    cout<<"Last Occurence of 2 is : "<<lastOccurence(arr,5,3);
}