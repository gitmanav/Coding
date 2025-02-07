#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data=d;
        left=NULL;
        right=NULL;
    }
};

void treeLevelOrderTraversal(Node* root)
{
    queue<Node*> q;
    cout<<"Enter data for root node: "<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1)
        {
            temp->left=new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1)
        {
            temp->right=new Node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    return 0;
    Node* root=NULL;
    treeLevelOrderTraversal(root);
}