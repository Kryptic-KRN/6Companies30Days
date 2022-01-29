class Solution {
public:
    int dp[201][201];
    int helper(int idx,int n){
        if(idx>=n) return 0;
        else if(dp[idx][n]!=-1) return dp[idx][n];
        int ans=INT_MAX;
        for(int i=idx;i<=n;i++){
            ans=min(ans,i+max(helper(i+1,n),helper(idx,i-1)));
        }
        return dp[idx][n]=ans;
    }
    
    int getMoneyAmount(int n){
        memset(dp,-1,sizeof dp);
        int ans=helper(1,n);
        return ans;
    }
};