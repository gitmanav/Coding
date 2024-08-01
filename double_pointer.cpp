#include<iostream>
using namespace std;


void update(int** ptr2)
{
    // p=p+1; //Kuch farq ni pdta

    // *ptr2=*ptr2+1;

    **ptr2=**ptr2+1;
}
int main()
{
    int value=5;
    int* ptr=&value;
    int** ptr1=&ptr;

    // cout<<*ptr<<endl;
    // *ptr=*ptr+1;
    // cout<<**ptr1<<endl;
    // cout<<&value<<endl;
    // cout<<endl;
    // cout<<&ptr;
    // cout<<endl;
    // cout<<*ptr1;

    // cout<<&value<<endl; //address of value variable
    // cout<<ptr<<endl; // address of value variable which was hold by the ptr
    // cout<<&ptr<<endl;// address of ptr itself
    // cout<<ptr1<<endl; //address of ptr
    // cout<<&ptr1<<endl;//address of ptr1


    cout<<endl<<endl;
    cout<<"Before: "<<value<<endl;
    cout<<"Before: "<<ptr<<endl;
    cout<<"Before: "<<ptr1<<endl;

    update(ptr1);

    cout<<"After: "<<value<<endl;
    cout<<"After: "<<ptr<<endl;
    cout<<"After: "<<ptr1<<endl;
}