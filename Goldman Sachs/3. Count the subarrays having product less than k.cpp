class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int l=0, r=0, ans=0;
        long long p=1;
        while(r<n){
            p*=a[r];
            if(p<k) ans+=(r-l+1);
            if(p>=k){
                while(l<r && p>=k){
                    p/=a[l];
                    l++;
                }
                if(p<k) ans+=(r-l+1);
            }
            r++;
        }
        return ans;
    }
};