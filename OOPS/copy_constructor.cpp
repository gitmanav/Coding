#include<iostream>
using namespace std;

class Animal{
    
    int age;
    public:
    string name;

    int getAge(int age)
    {
        return age;
    }
    void setAge(int a)
    {
        age=a;
    }

    Animal()
    {
        cout<<"Default constructor called";
    }
    Animal(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    Animal(Animal& a) //copy constructor
    {
        cout<<"Copy constructor called"<<endl;
        this->age=a.age;
        this->name=a.name;
    }

    void print()
    {
        cout<<"Age is: "<<age<<endl;
        cout<<"Name is: "<<name<<endl;
    }
};

int main()
{
    Animal a("bird",20);
    a.print();
    Animal b(a); //Copy constructor
    b.print();
}