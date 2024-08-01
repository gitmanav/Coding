#include<iostream>
using namespace std;

class Vehicle{
    private:
    int number;
    string name;
    char type;
    public:
    string getName(){
       this->name=name;
    }
    
};

int main()
{
    Vehicle v;
    // v.getName("Bike");
    // v.setName();
    return 0;
}