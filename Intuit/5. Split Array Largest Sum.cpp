class Solution {
public:
    bool helper(vector<int>& nums, int mid, int& m) {
        int sum=0, ans=1;
        for(const auto& num:nums) {
            if(sum+num>mid) {
                ans++;
                sum=num;
            }
            else{
                sum+=num;
            }
            if(ans>m) return true;
        }
        return ans>m;
    }
    int splitArray(vector<int>& nums, int m) {
        int l=0,r=0;
        for(const auto& num:nums){
            l=max(l,num);
            r+=num;
        }
        while(l<r) {
            int mid=((r-l)/2)+l;
            if(helper(nums,mid,m)){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return l;
    }
};