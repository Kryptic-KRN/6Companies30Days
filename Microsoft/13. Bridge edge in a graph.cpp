class Solution{
    public:
    int vis[10001];
    //Function to find if the given edge is a bridge in graph.
    int helper(int i, vector<int> adj[], int c, int d){
        vis[i]=1;
        for(auto x:adj[i]){
            if(i==c &&x==d) continue;
            if(!vis[x]) helper(x,adj,c,d);
        }
        return 0; 
    }
    int isBridge(int V, vector<int> adj[], int c, int d){
        // Code here
        memset(vis,0,sizeof(vis));
        helper(c,adj,c,d);
        return (!vis[d]);
    }
};