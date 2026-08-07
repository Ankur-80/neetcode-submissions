class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> final(nums.size(), 0);
        final[0] = 1;
        for(int i = 1; i < nums.size(); i++) {
            final[i] = final[i-1] * nums[i-1];
        }
        int suffix = 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            final[i] = final[i] * suffix;
            suffix *= nums[i];
        }
        return final;
    }
};