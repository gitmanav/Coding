#include<iostream>
#include<vector>
using namespace std;

void solve(string digits,vector<string>& ans,string output,int index,string mapping[])
{
    if(index>=digits.length())
    {
        ans.push_back(output);
        return;
    }
    int number= digits[index] -'0';   //Here we get the number
    string value=mapping[number];

    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digits,ans,output,index+1,mapping);
        output.pop_back(); //Back tracking
    }

}
int main()
{
    string digits="23";
    vector<string> ans;
    string output="";
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,ans,output,index,mapping);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}