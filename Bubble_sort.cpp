#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {

        bool swapped=false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}
// void BubbleSort2(int arr[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i;j<n-i-1;j++)
//         {
//             int temp=arr[j+1];
//             arr[j+1]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }
int main()
{
    int arr[8]={2,4,1,56,21,89,32,90};
    BubbleSort(arr,8);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // int arr2[8]={34,21,37,67,87,34,90,54};
    // BubbleSort2(arr2,8);
    // for(int i=0;i<8;i++)
    // {
    //     cout<<arr2[i]<<" ";
    // }
    return 0;
}