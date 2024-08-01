#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>m;

    //1st way for insertion
    pair<string,int> pair1=make_pair("manav",1);
    m.insert(pair1);

    //2nd way for insertion
    pair<string,int> pair2("manav",2);
    m.insert(pair2);

    //3rd way for insertion
    m["manav"]=3;
    //It will over write at the same entity
    m["manav"]=2;


    //Search
    cout<<m["manav"]<<endl;

    //Access without key existing 
    // cout<<m.at("unknown")<<endl; //It will throw the error because the key does not exist.
    cout<<m["unknown"]<<endl; //It will not throw an error because it will create the entry itself.  

    //size
    cout<<m.size()<<endl;

    //count function  
    cout<<m.count("manav")<<endl;

    //erase function

    cout<<m.erase("manav")<<endl;
    cout<<m.size()<<endl;
    pair<string,int>p=make_pair("manav",1);
    m.insert(p);
    //iterator 
    unordered_map<string,int> :: iterator it=m.begin();
    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}