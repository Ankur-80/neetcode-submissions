class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for(int idx = 0; idx < nums.size(); idx++) {
            int complememt = target - nums[idx];
            if(mpp.find(complememt) == mpp.end()) {
                mpp[nums[idx]] = idx;
            } else {
                return {mpp[complememt], idx};
                break;
            }
        }
        return {};
    }
};
