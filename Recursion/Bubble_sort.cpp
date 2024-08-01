#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size)
{
    //Base case --> when array is already sorted
    if(size==0 || size==1)
    {
        return;
    }

    //1 case solve krdo --> baaki recursion khud krdega 
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    //Baaki recursion call krdo 

    bubbleSort(arr,size-1);
}
int main()
{
    int arr[]={2,5,1,67,12,90,54,13};
    int size=8;

    bubbleSort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}