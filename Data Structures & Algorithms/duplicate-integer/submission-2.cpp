class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int idx = 0; idx < nums.size(); idx++) {
            if(mpp[nums[idx]]) {
                return true;
            }
            else {
                mpp[nums[idx]]++;
            }
        }
        return false;
    }
};