class Solution{
  public:
    int kvowelwords(int N, int K) {
        // Write Your Code here
        long long dp[N+1][K+1];
        long long mod=1e9+7;
        for(int i=0;i<=N;i++){
            for(int j=0;j<=K;j++){
                if(i==0){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=dp[i-1][K]*21%mod;
                    if(j>0){
                        dp[i][j]=(dp[i][j]+dp[i-1][j-1]*5%mod)%mod;
                    }
                }
            }
        }
        return (int)dp[N][K];
    }
};