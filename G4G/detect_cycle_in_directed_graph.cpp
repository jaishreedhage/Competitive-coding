/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/
/*
The structure of the class is as follows which contains an integer V denoting the no
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};
*/

bool dfs(int u,bool *visited, bool *recurstack, list<int> *adj, int V){
    if(visited[u]==false){
        visited[u] = true;
        recurstack[u] = true;
        list<int> :: iterator it;
        for(it = adj[u].begin();it!=adj[u].end();it++){
            if(visited[*it]!=true && dfs(*it, visited, recurstack, adj, V))
                return true;
            else if(recurstack[*it])
                return true;
        }
    }
    recurstack[u] = false;
    return false;
}

// Returns true if the graph contains a cycle, else false.
bool Graph::isCyclic()
{
    bool *visited = new bool[V];
    bool *recurstack = new bool[V];
    for (int i = 0; i < V; i++){
        visited[i] = false;
        recurstack[i] = false;
    }
    for (int u = 0; u < V; u++){
        if (!visited[u]) // Don't recur for u if it is already visited
          if (dfs(u, visited, recurstack, adj, V))
             return true;
    }
    return false;
}
//using recursion stack and visited array to solve the problem
