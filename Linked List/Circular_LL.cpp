#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        while(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<" memory is free from node with data "<<value<<endl;
    }
};


void Insert_node(Node* &tail,int d)
{
    
}
int main()
{

}