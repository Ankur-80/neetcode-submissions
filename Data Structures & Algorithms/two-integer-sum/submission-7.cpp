class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mpp;
        
        for(int idx = 0; idx < nums.size(); idx++) {
            int complement = target - nums[idx];
            if(mpp.find(complement) != mpp.end()) {
                return {mpp[complement], idx};
            } else {
                mpp[nums[idx]] = idx;
            }
        }
    }
};
