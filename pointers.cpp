#include<iostream>
using namespace std;

int main()
{
    int num=10;
    cout<<num<<" ";
    int *ptr=&num;
    cout<<*ptr<<" ";
    (*ptr)++;
    cout<<*ptr<<" ";
    cout<<num<<" ";
    num++;
    (*ptr)--;
    cout<<num<<" ";
    cout<<*ptr<<" ";
    cout<<"\nSize of num is: "<<sizeof(num)<<endl;
    cout<<"Size of pointer is: "<<sizeof(ptr)<<" ";

}