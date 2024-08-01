#include<iostream>
using namespace std;

class Stack{

    //Properties
    public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    //Behaviour
    void push(int element)
    {
        if(size-top >1){
        top++;
        arr[top]=element;
        }
        else
        {
            cout<<"Stack Overflow\n";
        }
    }
    void pop()
    {
        if(top>=0){
        int ele=arr[top];
        top--;
        }
        else
        {
            cout<<"Stack Underflow\n";
        }
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            cout<<"Stack is empty!!";
        }
        else{
            cout<<"Stack is not empty!!";
        }
    }
    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }

};
int main()
{
    Stack s(6);
    s.push(10);
    s.pop();
}