#include<iostream>
using namespace std;

int main()
{
    /*
    int arr[8]={1,2,3,4,5,6,7,8};

    cout<<"Address of first location is: "<<arr<<endl;
    cout<<"Address of first location is: "<<&arr[0]<<endl;

    cout<<"4th: "<<*arr<<endl;

    cout<<"5th: "<<*arr+1<<endl;
    cout<<"6th: "<<*(arr+1)<<endl;
    cout<<"7th: "<<(*arr)+1<<endl;
    int i=3;
    cout<<i[arr]<<endl;;;;;

    
    //using sizeOf operator

    int temp[10];

    int *ptr=&temp[10];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl; // * --> dereferencing  
    cout<<sizeof(&ptr)<<endl;
    */

   int a[20]={1,2,3,4,5,6,7,8};

    //All operations will give same output as first address of the array
    cout<<&a[0]<<endl;
    cout<<&a<<endl;;
    cout<<a<<endl;

    cout<<endl<<endl;
    int *p=&a[0];

    cout<<&p[0]<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
   
   
    return 0;
}