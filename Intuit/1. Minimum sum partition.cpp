class Solution{
  public:
     int minDifference(int arr[], int n)  { 
        // Your code goes here
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j==0)
                    dp[i][j]=true;
                else if(i==0)
                    dp[i][j]=false;
                else if(arr[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<=sum/2;i++){    
            int first=i;
            int second=sum-i;
            if(dp[n][i]==true && ans>abs(first-second))
                ans=abs(first-second);
        }
        return ans;
     } 
};