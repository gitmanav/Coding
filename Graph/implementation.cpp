#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph
{
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u, int v, int direction)
    {
        //direction =0 -> undirected graph
        //direction =1 -> directed graph

        //create an edge from u to v
        adj[u].push_back(v);

        if(direction == 0)  //check for undirected graph
        {
            adj[v].push_back(u);
        }
    }

    void printadj()
    {
        for(auto i:adj)
        {
            cout<<i.first<<" -> ";
            for(auto j:i.second)
            {
                cout<<j<<" , ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes:\n";
    cin>>n;

    int m;
    cout<<"Enter the number of edges:\n";
    cin>>m;

    Graph g;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printadj();
}