#include<iostream>
using namespace std;


class Hero{
    public:
    int level;

    private:
    char health;

    void setHealth(char h)
    {
        health=h;
    }
    char getHealth()
    {
        return health;
    }
    
};

int main()
{
    Hero *h1=new Hero;

    cout<<(*h1).level<<endl;

    cout<<h1->level<<endl;
    // (*h1).setHealth('a');
    // cout<<h->getHealth();
}