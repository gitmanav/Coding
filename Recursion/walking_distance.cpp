#include<iostream>
using namespace std;

void reachHome(int src,int dest)
{
    cout<<"Source is: "<<src<<" Destination is: "<<dest<<endl;
    //Base Case
    if(src==dest)
    {
        cout<<"Pachuch gya "<<endl;
        return;
    }

    //Processing
    src++;

    //Recursive call
    reachHome(src,dest);
}
int main()
{
    int dest=10;
    int src=1;

    cout<<endl;
    reachHome(src,dest);
}