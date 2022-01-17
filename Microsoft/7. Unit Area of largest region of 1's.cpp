class Solution{
    public:
    //Function to find unit area of the largest region of 1s.
    void helper(vector<vector<int>>&a,int i,int j,int n,int m,int &c){
        if(i<0||i>=n||j<0||j>=m) return;
        if(a[i][j]==0) return ;
        c++;
        a[i][j]=0;
        helper(a,i+1,j,n,m,c);
        helper(a,i-1,j,n,m,c);
        helper(a,i,j+1,n,m,c);
        helper(a,i,j-1,n,m,c);
        helper(a,i+1,j-1,n,m,c);
        helper(a,i-1,j-1,n,m,c);
        helper(a,i+1,j+1,n,m,c);
        helper(a,i-1,j+1,n,m,c);
    }
    int findMaxArea(vector<vector<int>>&grid){
       int n=grid.size();
       int m=grid[0].size();
       int ans=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               int c=0;
               if(grid[i][j]==1)
                   helper(grid,i,j,n,m,c);
                   ans=max(ans,c);
              
           }
       }
       return ans;
   }
};