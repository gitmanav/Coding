#include<iostream>
using namespace std;

void merge(int arr[],int start,int end)
{
    int mid = start + (end-start)/2;

    int len1=mid-start+1;
    int len2=end-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int k= start;

    //copy the values in 2 sub arrays from the main array

    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[k++];
    }

    //merge two sorted array
    int index1=0;
    int index2=0;
    k=start;
    while(index1<len1  && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];

        }
    }
    //check for remaining elements in array1
    while(index1<len1)
    {
        arr[k++]=first[index1++];
    }
    //check for remaining elements in array2
    while(index2<len2)
    {
        arr[k++]=second[index2++];
    }
    delete []first;
    delete []second;
}


void mergeSort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }

    int mid=start+(end-start)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}
int main()
{
    int arr[15]={2,5,4,11,23,45,1,90,45,21,34,78,13,10,12};
    int size=15;
    int start=0;
    int end=size-1;
    mergeSort(arr,start,end);

    for(int i=0;i<15;i++)
    {
        cout<<arr[i]<<" ";
    }
}