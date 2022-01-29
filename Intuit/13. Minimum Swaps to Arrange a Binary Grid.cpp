class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> count(n,0);
        for(int i=0;i<grid.size();i++){
            int z=0;
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]!=0){
                    break;
                }
                z++;
            }
            count[i]=z;
        }
        int i=0;
        int ans=0;
        while(i<n){
            int k=i;
            int req=n-1-i;
            while(k<n && count[k]<req) k++;
            if(k==n) return -1;
            ans+=k-i;
            while(k>i){
                count[k]=count[k-1];
                k--;
            }
            i++;
        }
        return ans;
    }
};