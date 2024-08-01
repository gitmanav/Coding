#include<iostream>
using namespace std;

int print(int *p)
{
    cout<<(*p)<<endl;
}

int update(int *p)
{
    *p=*p+1;
    cout<<"Inside update function: "<<*p<<endl;   //Changes reflected
    p=p+1;
    cout<<"Inside update function: "<<p<<endl; //Changes reflected
}

int getSum(int *arr,int n) // int getSum(int *arr,int n)  --> Both are same
{
    cout<<endl<<"Size is: "<<sizeof(arr)<<endl; //It will take only array as a pointer.

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    // int value=5;
    // int *p=&value;

    // print(p);
    // cout<<p<<endl;
    // update(p);
    // cout<<*p<<endl; //There also changes because of update function can update the values.

    int arr[5]={1,2,3,4,5};
    cout<<"Sum is:  "<<getSum(arr,5);
    cout<<"Sum is: "<<getSum(arr+3,2);
}