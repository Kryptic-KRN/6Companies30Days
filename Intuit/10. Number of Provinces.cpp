class Solution {
public:
    void helperUtil(int s,vector<vector<int>>& isConnected,bool vis[],int n){
        vis[s]=1;
        for(int it=0;it<n;it++){
            if(isConnected[s][it]==1){
                if(vis[it]==0) helperUtil(it,isConnected,vis,n);
            }
        }
    }
    
    int helper(vector<vector<int>>& isConnected,bool vis[],int n){
        int c=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                c++;
                vis[i]=1;
                helperUtil(i,isConnected,vis,n);
            }
        }
        return c;
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected[0].size();
        bool vis[n+1];
        for(int i=0;i<n;i++){
            vis[i]=0;
        }
        return helper(isConnected,vis,n);
    }
};