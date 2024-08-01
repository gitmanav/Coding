#include<iostream>
using namespace std;
void reverse(string &s,int start,int end)
{
    if(start>end)
    {
        return;
    }
    swap(s[start],s[end]);
    start++;
    end--;
    reverse(s,start,end);
}
int main()
{
    string str="abcdef";
    int n=str.length();
    reverse(str,0,n-1);
    cout<<str;
}