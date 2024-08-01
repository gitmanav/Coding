#include<iostream>

using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number\n";
//     cin>>n;

//     int i=2;
//     if(n==2)
//     {
//         cout<<"Prime number\n";
//     }

//     while(i<n)
//     {
//         if(n%i==0)
//         {
//             cout<<"Not a prime number\n";
//             break;
//         }
//         else{
//             cout<<"Prime number\n";
//             break;
//         }
//         i=i+1;
//    }
//    return 0;
// }


int main(){
    int n;
    cout<<"Enter a Number:\n";
    cin>>n;

    bool isPrime=1;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            // cout<<"It is not a prime number\n";
            isPrime=0;
            break;
        }

    }
    if(isPrime==0)
    {
        cout<<"Not a prime number\n";
    }
    else{
        cout<<"Prime number\n";
    }

}