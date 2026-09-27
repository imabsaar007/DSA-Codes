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
    void addEdgeDir(int src,int dest){
        adj[src].push_back(dest);
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
    void BFS(int start){
       vector<bool> visited(vertices,false);
       queue<int> q;
       q.push(start);
       visited[start] = true;
       while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node <<" ";
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
       }
    }
    bool isCyclicUtilDFS(int node,int parent,vector<bool>& visited){
        visited[node] = true;
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                if(isCyclicUtilDFS(neighbour,node,visited)){
                    return true;
                }
            }
            else if(neighbour != parent){
                return true;
            }
        }
        return false;
    }
    bool isCyclicDFS() {
        vector<bool> visited(vertices, false);
        // Loop through all vertices to handle disconnected graphs
        for (int i = 0; i < vertices; i++) {
            if (!visited[i]) {
                if (isCyclicUtilDFS(i, -1, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycleDirDFS(vector<bool>& visited, vector<bool>& recPath,int start){
        visited[start] = true;
        recPath[start] = true;
        for(int neighbour : adj[start]){
            if(!visited[neighbour]){
                if(isCycleDirDFS(visited,recPath,neighbour)){
                    return true;
                }
            }
            else if(recPath[neighbour]){
                    return true;
            }
        }
        recPath[start] = false;
        return false;
    }
    bool isCycle(){
        vector<bool> visited(vertices,false);
        vector<bool> recpath(vertices,false);
        for(int i = 0; i < vertices; i++){
            if(!visited[i]){
                if(isCycleDirDFS(visited,recpath,i)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Graph g(4);
    g.addEdgeDir(0,2);
    g.addEdgeDir(2,3);
    g.addEdgeDir(1,0);
    g.addEdgeDir(3,0);
    // g.DFS(0);
    // g.BFS(0);
    // cout << endl;
    // cout << g.isCyclicDFS();
    cout << g.isCycle();
    return 0;
}