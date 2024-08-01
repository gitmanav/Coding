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
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(Node* root)
{
    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;
    root=new Node(data);

    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter data for inserting in left: "<<data << endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right: "<<data << endl;
    root->right=buildTree(root->right);

    return root;
}

Node* levelOrderTraversal(Node* root)
{
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}

Node* levelOrderTraversal2(Node* root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL); //We need to add a separator 
    while(!q.empty())
    {
        Node* temp=q.front();
        
        q.pop();
        if(temp==NULL)
        {
            //purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty())
            {
                //queue still have some nodes 
                q.push(NULL); //we need to add a separator 
            }    
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
    }
    }

}
int main()
{
    Node* root=NULL;
    root=buildTree(root);
    levelOrderTraversal(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    //leverl order traversal
    cout<<endl<<"Printing the level order traversal: "<<endl;
    levelOrderTraversal(root);

    //level wise print hoga 
    cout<<endl<<"Printing the level order traversal in level-wise: "<<endl;
    levelOrderTraversal2(root);
}