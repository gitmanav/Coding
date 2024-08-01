#include<iostream>
using namespace std;

int main()
{

    //For square matrix
    // int n;
    // cout<<"Enter the size:\n";
    // cin>>n;
    // int** arr= new int*[n];

    // for(int i=0;i<n;i++)
    // {
    //     arr[i]= new int[n];
    // } 

    int row;
    cin>>row;
    int col;
    cin>>col;

    int** arr=new int*[row];

    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
    //taking input

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //printing
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Release memory
    for(int i=0;i<row;i++)
    {
        delete [] arr[i];  //deletion on row-wise
    }
    delete [] arr;      //Deletion on column-wise
}



