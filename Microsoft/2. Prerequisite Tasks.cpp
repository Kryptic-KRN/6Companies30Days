class Solution {
public:
    bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
        // Code here
        vector<vector<int>> adj(N);
        vector<int> inD(N,0);
        queue<int> q;
        for(auto p:prerequisites){
            adj[p.first].push_back(p.second);
            inD[p.second]++;
        }
        for(int i=0;i<N;i++){
            if(inD[i]==0) 
                q.push(i);
        }
        int count=0;
        while(!q.empty()){
            int node=q.front();
            count++;
            q.pop();
            for(auto i:adj[node]){
                inD[i]--;
                if(inD[i]==0){
                    q.push(i);
                }
            }
        }
        return (count==N);
    }
};