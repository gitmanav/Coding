#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int mid= start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key)
        {
            return mid;
        }
            //Traverse to the right side
        if(key>arr[mid])
        {
            start=mid+1;
        }

        //Traverse to the left side
        else
        {
            end=mid-1;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int even[8]={3,5,7,9,11,14,16,18};

    int odd[5]={1,2,3,4,5};
    int evenIndex=binarySearch(even,8,6);


    cout<<"Index of 6 is: "<<evenIndex<<endl;

    int oddIndex=binarySearch(odd,5,0);

    cout<<"Index of 0 is: "<<oddIndex<<endl;
}