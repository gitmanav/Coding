#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    // ~Node()
    // {
    //     int value=this->data;
    //     //memory free
    //     if(this->next != NULL)
    //     {
    //         delete next;
    //         this->next=NULL;
    //     }
    //     cout<<"Memory is from from node with data "<<value<<endl;
    // }

};

void Insert_at_head(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void Insert_at_tail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void Insert_at_position(Node* &tail,Node* &head,int pos,int d)
{
    Node*temp = head;
    int count=1;
    //Insert at Start
    if(pos==1)
    {
        Insert_at_head(head,d);
        return;
    }
    //Insert at last position

    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    //Insert at last position
    if(temp->next==NULL)
    {
        Insert_at_tail(tail,d);
        return;
    }

    Node* NodeToInsert=new Node(d);
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;
}

void deleteNode(Node* &head,int pos)
{
    //deletion of first or starting node
    if(pos==1)
    {
        Node*temp=head;
        head=head->next;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr=head;
        Node* prev=NULL;

        int count=1;
        while(count<=pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        delete curr;
    }
}
void print(Node* head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(10);

    
    Node* head=node1;
    Node* node2=new Node(20);
    Node*tail=node1;
    Insert_at_tail(tail,20);
    Insert_at_tail(tail,30);
    Insert_at_tail(tail,100);
    print(head);
    // Insert_at_head(head,20);
    print(head);
    // Insert_at_head(head,30);
    Insert_at_position(tail,head,4,35); //Insertion at tail
    Insert_at_position(tail,head,2,15);//Insertion at middle
    Insert_at_position(tail,head,1,5);//Insertion at begin
    print(head);
    deleteNode(head,1);
    print(head);
}