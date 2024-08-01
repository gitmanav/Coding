#include<iostream>
using namespace std;

void print(int arr[],int size)
{
    cout<<"Size of the array is: "<<size<<endl;;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearSearch(int arr[],int size,int key)
{
    print(arr,size);
    if(size==0)
    {
        return 0;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else{bool remaining = linearSearch(arr+1,size-1,key);
    return remaining;
    }
}
int main()
{
    int arr[]={3,4,5,6,7,8,10};
    int key=10;
    int size=7;

    bool ans=linearSearch(arr,size,key);
    cout<<ans;

}