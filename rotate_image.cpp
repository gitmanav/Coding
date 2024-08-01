#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> vect 
    { 
        /* Element one with 2 values in it. */
        {5,1,9,11},  
        
        /* Element two with 3 values in it. */
        {2,4,8,10},  
        
         /* Element three with 4 values in it. */
        {13,3,6,7},
  
        {15,14,12,16}  
    }; 
    vector<vector<int>> vect1 
    { 
        /* Element one with 2 values in it. */
        {1,2,3},  
        
        /* Element two with 3 values in it. */
        {4,5,6},  
        
         /* Element three with 4 values in it. */
        {7,8,9},
 
    }; 
    vector<vector<int>>ans;
    for(int i=0;i<vect.size();i++)
    {
        vector<int>temp;
        for(int j=0;j<vect[0].size();j++)
        {
            temp.push_back(vect[j][i]);
        }
        ans.push_back(temp);
    }
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    vector<vector<int>>ans1;
    for(int i=0;i<vect1.size();i++)
    {
        vector<int>temp;
        for(int j=0;j<vect1[0].size();j++)
        {
            temp.push_back(vect1[j][i]);
        }
        ans1.push_back(temp);
    }
    
    for(int i=0;i<vect1.size();i++)
    {
        for(int j=0;j<vect1[0].size();j++)
        {
            cout<<ans1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int row=vect.size();
    int col=vect[0].size();
    int count=0;
    int total=row*col;
    int startCol=0;
    int endingCol=col-1;
     int num_rows = vect.size();
     int num_col=0;
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect[0].size();j++)
        {
            num_col++;
            break;
        }
    }
    cout<<num_col<<endl;
    int col1=0;
    int col2=num_col-1;
    while(num_col!=0)
    {
    for (int row = 0; row < num_rows; row++) {
        // Swap elements at col1 and col2 using a temporary
        // variable
        int temp = vect[row][col1];
        vect[row][col1] = vect[row][col2];
        vect[row][col2] = temp;
    }
    col1++;
    col2--;
    num_col--;
    }
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect[0].size();j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=vect.size()-1;i>=0;i--)
    {
        vector<int>ans;
        for(int j=vect[0].size();j>=0;j--)
        {
            ans.push_back(vect[i][j]);
        }
        vect.push_back(ans);
    }
    cout<<endl;
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect[0].size();j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
}