class Solution {
public:
    int helper(vector<int>& piles, int a){
        int sum=0;
        for(auto& p:piles){
            sum+=(int)ceil((double)p/a);
        }
        return sum;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            int x=helper(piles,mid);
            if(x>h){
                l=mid+1;
            }
            else{
                r=mid-1;
                ans=mid;
            }
        }
        return ans;
    }
};