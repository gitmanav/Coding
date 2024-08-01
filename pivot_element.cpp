#include<iostream>
using namespace std;

int pivotElement(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }

        mid=start+(end-start)/2;
    }
    return start;
}
int main()
{
    int arr[5]={2,3,10,17,1};
    cout<<pivotElement(arr,5);
}