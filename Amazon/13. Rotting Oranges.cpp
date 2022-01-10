class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
        queue<int> q;
        int n=a.size(),m=a[0].size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==2){
                    q.push(i*m+j);
                }
                if(a[i][j]==1){
                    c++;
                }
            }
        }
        int ans=-1;
        int d[]={1,0,-1,0,1};
        while(!q.empty()){
            int l=q.size();
            for(int i=0;i<l;i++){
                int b=q.front();
                q.pop();
                int z=b/m,x=b%m;
                for(int j=0;j<4;j++){
                    if(z+d[j]>=0&&z+d[j]<n&&x+d[j+1]>=0&&x+d[j+1]<m&&a[z+d[j]][x+d[j+1]]==1){
             q.push((z+d[j])*m+x+d[j+1]);
                     a[z+d[j]][x+d[j+1]]=2;
                        c--;
                    }
                }
            }
            ans++;
        }
        return  c==0 ? max(0,ans) : -1;
    }
};