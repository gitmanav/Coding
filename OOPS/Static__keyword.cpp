#include<iostream>
using namespace std;

class Hero{
    public:
    static int value;
    int health;

};
int Hero :: value =10;
int main()
{
    cout<<Hero::value<<endl;
}