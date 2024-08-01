#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

};

void Insert_at_begin(Node* &tail,Node* &head,int d)
{
    if(head==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void Insert_at_end(Node* &head,Node* &tail,int d)
{
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void Insert_at_position(Node* &tail,Node* &head,int pos,int d)
{
    //Only One node
    if(pos==1)
    {
        Insert_at_begin(tail,head,d);
        return;
    }
    Node* temp=head;
    int count=1;

    while(count<pos-1)
    {
        count++;
        temp=temp->next;
    }
    //Last position
    if(temp->next==NULL)
    {   
        Insert_at_end(head,tail,d);
        return;
    }
    Node* new_node=new Node(d);
    new_node->next=temp->next;
    temp->next->prev=new_node;
    temp->next=new_node;
    new_node->prev=temp;
}

void Delete_node(int pos,Node* &head)
{
    //Deletion at first position
    if(pos==1){
    Node*temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    }
    else{
        //Deletion at middle and last position
        Node* curr=head;
        Node* prev=NULL;
        int count=1;

        while(count<pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }

}
int main()
{   
    Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    display(head);
    Insert_at_begin(tail,head,11);
    display(head);
    Insert_at_begin(tail,head,12);
    display(head);
    Insert_at_end(head,tail,25);
    display(head);
    Insert_at_position(tail,head,2,150);
    display(head);
    Delete_node(4,head);
    display(head);
}