#include<iostream>
#include<vector>
using namespace std;

void subsequence(string str,string output,vector<string>& ans,int index)
{
    if(index>=str.length())
    {
        ans.push_back(output);
        return;
    }
    //Exclude
    subsequence(str,output,ans,index+1);

    //Include
    char temp=str[index];
    output.push_back(temp);
    subsequence(str,output,ans,index+1);
}

int main()
{
    string str="abc";
    string output="";
    vector<string>ans;
    int index=0;
    subsequence(str,output,ans,index);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}