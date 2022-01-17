class Solution{
    public:
    void helper(int src, vector<int>& vis, string& ans, vector<vector<int>>& G){
        vis[src]=1;
        for(auto i:G[src]){
            if(!vis[i]){
                helper(i,vis,ans,G);
            }
        }
        char c='a'+src;
        ans=c+ans;
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<vector<int>> G(K);
        for(int i=0;i<N-1;i++){
            string s1=dict[i], s2=dict[i+1];
            for(int j=0;j<min(s1.length(),s2.length());j++){
                if(s1[j]!=s2[j]){
                    G[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        string ans;
        vector<int> vis(K,0);
        for(int i=0;i<K;i++){
            if(!vis[i]){
                helper(i,vis,ans,G);
            }
        }
        return ans;
    }
};