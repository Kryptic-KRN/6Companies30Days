class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[((nums[i]%k)+k)%k]++;
        }
        if(m[0]%2!=0) return false;
        for(int i=1;i<k;i++){
            if(m[i]!=m[k-i]) return false;
        }
        return true;
    }
};