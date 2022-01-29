class Solution {
public:
    bool isSafe(int x, int y, int n, int m){
        return !(x<0 || y<0 || x>=n || y>=m);
    }
    void helper(int n, int m, queue<pair<int,int>>& q, vector<vector<bool>> &vis, vector<vector<int>> heights){
        int dx[]={-1,0,0,1};
        int dy[]={0,-1,1,0};
        while(!q.empty()){
            auto e=q.front();
            q.pop();
            for(int iter=0;iter<4;iter++){
                int nx=e.first+dx[iter];
                int ny=e.second+dy[iter];
                if(isSafe(nx,ny,n,m) && heights[e.first][e.second]<=heights[nx][ny] && !vis[nx][ny]){
                    q.push({nx,ny});
                    vis[nx][ny]=1;
                }
            }
        }
    }
	
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
		queue<pair<int,int>> q_a;
        queue<pair<int,int>> q_p;
        vector<vector<bool>> vis_a(n,vector<bool>(m,0));
        vector<vector<bool>> vis_p(n,vector<bool>(m,0));
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0){
                    q_p.push({i,j});
                    vis_p[i][j]=1;
                }
                if(i==n-1 || j==m-1){
                    q_a.push({i,j});
                    vis_a[i][j]=1;
                }
            }
        }
        helper(n,m,q_a,vis_a,heights);
        helper(n,m,q_p,vis_p,heights);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis_a[i][j] && vis_p[i][j]){
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }
};