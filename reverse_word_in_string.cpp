#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
void rev(string temp)
{
    int s=0;
    int e=temp.length()-1;

    while(s<=e)
    {
        swap(temp[s],temp[e]);
    }
}
string rever(string &s)
{
    string ans;
    for(int i=0;i<s.length();i++)
    {
        string temp;
        if((s[i]>='A' && s[i]<='Z' ) || (s[i]>='a' && s[i]<='z'))
        {
            temp.push_back(s[i]);
        }
        if(s[i]==' ')
        {
            rev(temp);
            s.append(temp);
        }
    }
    return s;
}

int main()
{
    string s;
    s="My name is Manav";
    cout<<rever(s);
}