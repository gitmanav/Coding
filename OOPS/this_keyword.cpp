#include<iostream>
using namespace std;

class Hero{
    private:
    int level;

    public:
    int health;

    Hero(int health)
    {
        cout<<"Address of thsi is: "<<this<<endl;
        this->health=health;
    }
};
int main()
{
    Hero ramesh(10);
    cout<<"Address of object is: "<<&ramesh<<endl;
    return 0;
}