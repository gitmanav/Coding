#include<iostream>
using namespace std;

//LINEAR SEARCH
bool search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key:\n";
    cin>>key;

    bool found=search(arr,size,key);

    if(found)
    {
        cout<<"Key is present";
    }
    else{
        cout<<"Key is absent";
    }
}