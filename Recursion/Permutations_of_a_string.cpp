#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int> nums,int index,vector<vector<int>>& ans)
{
    //base case
    if(index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        permutation(nums,index+1,ans);
        //backtrack
        swap(nums[index],nums[i]);
    }
}

int main()
{
    vector<int> nums={1,2,3};
    int index=0;
    vector<vector<int>> ans;
    permutation(nums,index,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}