/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of the class is as follows
which contains an integer V denoting the no
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};*/
/*You are required to complete this method*/
bool dfs(list<int> *adj, int i, int V, int visited[], int parent){
    visited[i] = 1;
    list <int> :: iterator it;
    for(it=adj[i].begin();it!=adj[i].end();it++){
        if(visited[*it]==1 && (parent!=*it )){
            return true;
        }
        else if(visited[*it]==0 && dfs(adj,*it,V,visited,i)){
            return true;
        }
    }
    return false;
}
bool Graph :: isCyclic()
{
    int visited[V] = {0};
    for(int i=0;i<V;i++){
        if(visited[i]!=1 && dfs(adj,i,V,visited,-1)){
            return true;
        }
    }
    return false;
}
//use of parent variable to detect loop
