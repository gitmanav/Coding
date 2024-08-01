#include<iostream>
using namespace std;

int SelectionSort(int arr[] , int n)
{

    for(int i=0;i<n-1;i++)
    {
        int minPos=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minPos])
            {
                minPos=j;
            }
        }
        int temp=arr[minPos];
        arr[minPos]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int arr[8]={2,5,1,7,13,78,0,5};
    SelectionSort(arr,8);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
}