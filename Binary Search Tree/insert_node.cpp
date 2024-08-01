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

Node* insertIntoBST(Node* root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    if(data<root->data)
    {
        root->left=insertIntoBST(root->left,data);
    }
    if(data>root->data)
    {
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}

void LevelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
        }
    }
}
void takeInput(Node* &root)
{
    int data;
    cin>>data;

    while(data !=-1)
    {
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<< root->data <<" ";
    inorder(root->right);
}

void preorder(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    cout<< root-> data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int minVal(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;

}
Node* deleteFromBST(Node* root,int val)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->data == val)
    {
       //0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        
        //1 child
        if(root->left==NULL&& root->right!=NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minVal(root->right);
            // int max=maxVal(root->left)->data;
            root->data = mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }



    }
    else if(root->data>val)
    {
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else {
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}
int main()
{
    Node* root=NULL;
    cout<<"Enter data to create BST"<<endl;
    takeInput(root);
    cout<<"Priting BST is: "<<endl;
    LevelOrderTraversal(root);
    cout<<endl<<"Inorder Traversal is: "<<endl;
    inorder(root);
    cout<<endl<<"Preorder Traversal is: "<<endl;
    preorder(root);
    cout<<endl<<"Postorder Traversal is: "<<endl;
    postorder(root);
    int val=0;
    cout<<endl<<"Enter the value that you wants to delete \n";
    cin>>val;
    deleteFromBST(root,val);
    cout<<endl;
    LevelOrderTraversal(root);
}