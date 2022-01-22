class Solution{
    public:
    long long dp[1001][1001];
    long long mod=1e9+7;
    long long helper(int n, int x, int i){
        if(n==0) return 1;
        if(i>n) return 0;
        if(dp[n][i]!=-1) return (dp[n][i]%mod);
        long long t=pow(i,x);
        if(t<=n){
            dp[n][i]=helper(n-t,x,i+1)+helper(n,x,i+1);
            return dp[n][i]%mod;
        }
        else{
            dp[n][i]=0;
            return dp[n][i]%mod;
        }
    }
    long long numOfWays(int n, int x){
        // code here
        memset(dp,-1,sizeof(dp));
        return helper(n,x,1);
    }
};