#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;

    void addEdge(int u,int v,int weight)
    {
        pair<int,int> p=make_pair(v,weight);
        adj[u].push_back(p);
    }
    
    void printadj()
    {
        for(auto i:adj)
        {
            cout<<i.first<<" -> ";
            for(auto j:i.second)
            {
                cout<<"("<<j.first<<","<<j.second<<")";
            }
            cout<<endl;
        }
    }
    void dfs(unordered_map<int,bool> &visited,stack<int> &s,int node)
    {
        // s.push(index);
        visited[node]=true;
        for(auto neighbour: adj[node])
        {
            if(!visited[neighbour.first])
            {
                dfs(visited,s,neighbour.first);
            }
        }
        s.push(node);
    }
    void getShortestPath(int src,vector<int>& distance,stack<int> &s)
    {
        distance[src]=0;

        while(!s.empty())
        {
            int top=s.top();
            s.pop();

            if(distance[top] != INT_MAX)
            {
                for(auto i:adj[top])
                {
                    if(distance[top] + i.second <distance[i.first])
                    {
                        distance[i.first]=distance[top]+i.second;
                    }
                }
            }
        }
    }
};
int main()
{
    Graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);
    g.printadj();

    int n=6;
    //topological sort
    unordered_map<int,bool> visited;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            g.dfs(visited,s,i);
        }
    }
    int src=1;
    vector<int>dist(n);

    for(int i=0;i<n;i++)
    {
        dist[i]=INT_MAX;
    }
    g.getShortestPath(src,dist,s);

    cout<<"answer is: "<<endl;

    for(int i=0;i<dist.size();i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    return 0;

}