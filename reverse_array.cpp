#include<iostream>
using namespace std;


void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int size;
    cout<<"Enter the size:\n";
    cin>>size;

    int arr[100];

    cout<<"Enter the elements of array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Reverse of an array is:\n";
    reverse(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}