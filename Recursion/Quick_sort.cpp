#include<iostream>
using namespace std;


int partition(int arr[],int start,int end)
{
    int pivot=arr[start];

    int count=0;

    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }

    //place pivot at right position

    int pivotIndex= start + count;
    swap(arr[pivotIndex],arr[start]);

    //left and right part solve kro
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void Quicksort(int arr[],int start,int end)
{
    //Base case
    if(start>end)
    {
        return;
    }

    //Partition
    int p=partition(arr,start,end);

    //left part ko sort karo

    Quicksort(arr,start,p-1);

    //Right part ko solve kro
    Quicksort(arr,p+1,end);
}
int main()
{
    int arr[10]={1,67,32,54,21,89,6,32,1,45};
    int size=10;
    int start=0;
    int end=size-1;
    Quicksort(arr,start,end);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}