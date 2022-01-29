class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto cmp=[](auto& a, auto& b){
            return (a.size()==b.size())?a>b:a.size()>b.size();
        };
        nth_element(nums.begin(),nums.begin()+(k-1),nums.end(),cmp);
        return nums[k-1];
    }
};