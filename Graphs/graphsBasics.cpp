#include<bits/stdc++.h>
using namespace std;
class Graph{
    int vertices;
    vector<vector<int>> adj;
    public:
    Graph(int vertices){
        this->vertices = vertices;
        adj.resize(vertices);
    }
    void addEdge(int src, int dest){
        adj[src].push_back(dest);
        adj[dest].push_back(src);
    }
    void recursiveDFS(int node,vector<bool>& visited){
        visited[node] = true;
        cout << node << " ";
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                recursiveDFS(neighbour,visited);
            }
        }
    }
    void DFS(int startVertex){
        vector<bool> visited(vertices,false);
        cout << "Traversal of graph starting from vertex : "<<" "<< startVertex <<endl;
        recursiveDFS(startVertex,visited);
        cout << endl;
    }
};
int main(){
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.DFS(0);
    return 0;
}