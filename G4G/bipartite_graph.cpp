/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/

/*The function takes an adjacency matrix representation of the graph (g)
and an integer(v) denoting the no of vertices as its arguments.
You are required to complete below method */
bool dfs(int G[][MAX],int V, int i, int c, bool visited[],int color[]){
    visited[i] = 1;
    color[i] = c;
    for(int j = 0;j<V;j++){
        if(G[i][j]==1 && visited[j]==1 && color[j]==color[i]){
            return false;
        }
        else if(G[i][j]==1 && visited[j]!=1 && !dfs(G,V,j,1-c,visited,color)){
            return false;
        }
    }
    return true;
}
bool isBipartite(int G[][MAX],int V)
{
     //Your code here
     bool visited[V] = {0};
     int color[V] = {-1};
     for(int i=0;i<V;i++){
         if(visited[i]!=1 && !dfs(G,V,i,0,visited,color))
            return 0;
     }
     return 1;
}
//color nodes with 2 colors. 
