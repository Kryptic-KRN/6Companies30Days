class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLength = INT_MAX;
        if(nums.size() == 1){
            if(nums[0] < target) return 0;
            else return 1;
        }
        int left = 0;
        int right = 0;
        int sum = nums[left];
        while(right < nums.size()){
            if(right!=0){
                sum = sum + nums[right];
            }else{
                sum = sum;
            }
            if(sum >= target){
                while(left <= right && sum >= target){
                    minLength = min(minLength, right - left + 1);
                    sum = sum - nums[left];
                    left++;
                }
            }
            right++;

        }
        return minLength == INT_MAX? 0 : minLength;
    }
};