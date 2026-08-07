class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for(int idx = 0; idx < nums.size(); idx++) {
            int complememt = target - nums[idx];
            if(mpp.find(complememt) != mpp.end()) {
                return {mpp[complememt], idx};
            }
            mpp[nums[idx]] = idx;
        }
        return {};
    }
};
