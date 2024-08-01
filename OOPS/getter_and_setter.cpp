#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level='a';

    void print()
    {
        cout<<level<<endl;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health=h;
    }
};

int main()
{
    Hero ramesh; //Static Allocation

    Hero *r1=new Hero;  //Dynamically allocation
    
    cout<<ramesh.getHealth()<<endl;
    ramesh.setHealth(10);
    cout<<"Health is: "<<ramesh.getHealth()<<endl;

    cout<<ramesh.level<<endl;
}
