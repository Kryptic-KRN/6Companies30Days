class Solution{
    public:
    //You need to complete this fucntion
    long long power(long long N,long long R){
        long long ans=1;
        while(R>0){
            if(R%2==0){
                N=(N%mod*N%mod)%mod;
                R=R/2;
            }
           else{
                ans=(ans%mod*N%mod)%mod;
                R=R-1;
           }
        }
        return ans%mod;
    }
};