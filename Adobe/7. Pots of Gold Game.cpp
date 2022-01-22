class Solution {
public:
    int dp[1001][1001];
    int helper(vector<int>&A,int n,int i){
        if(i>n) return 0;
        if(dp[i][n]!=0) return dp[i][n];
        return dp[i][n]=max(A[i]+min(helper(A,n,i+2),helper(A,n-1,i+1)),A[n]+min(helper(A,n-1,i+1),helper(A,n-2,i)));
    }
    int maxCoins(vector<int>&A,int n){
        //Write your code here
        memset(dp,0,sizeof(dp));
        return helper(A,n-1,0);
    }
};