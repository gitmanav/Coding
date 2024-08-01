#include<iostream>

using namespace std;


bool palindrome(string str,int start,int end)
{
    //Base Case
    if(start>end)
    {
        return true;
    }
    if(str[start]!=str[end])
    {
        return false;
    }
    else{
        return palindrome(str,start+=1,end-=1);
    }

}
int main()
{
    string str="abcbad";
    int start=0;
    int end=str.length()-1;
    bool ans=palindrome(str,start,end);
    if(ans)
    {
        cout<<"The given string "<<str<<" is a palindrome"<<endl;
    }
    else{
        cout<<"The given string "<<str<<" is not a palindrome"<<endl;
    }
}