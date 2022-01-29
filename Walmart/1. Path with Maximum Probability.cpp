class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        ios::sync_with_stdio(0);
        cin.tie(nullptr);
        double ans;
        int m=edges.size(),x;
        vector<bool> vis(n,0);
        priority_queue<pair<double, int>> buf;
        vector<vector<pair<int, double>>> edge(n);
        for(int i=0;i<m;i++){
            edge[edges[i][0]].push_back(make_pair(edges[i][1],succProb[i]));
            edge[edges[i][1]].push_back(make_pair(edges[i][0],succProb[i]));
        }
        buf.push(make_pair(1,start));
        while(buf.size()) {
            if(vis[buf.top().second]) {
                buf.pop();
                continue;
            }
            ans=buf.top().first;
            x=buf.top().second;
            buf.pop();
            if(x==end) {
                return ans;
            }
            vis[x]=true;
            for(auto &p:edge[x]) {
                if(!vis[p.first]) {
                    buf.push(make_pair(ans*p.second,p.first));
                }
            }
        }
        return 0;
    }
};