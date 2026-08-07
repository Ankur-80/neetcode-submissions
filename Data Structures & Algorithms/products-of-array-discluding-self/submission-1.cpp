class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> ret (nums.size(),0);

        ret[0] = 1;
        for(int i = 1; i < nums.size(); i++) {
            ret[i] = ret[i-1] * nums[i-1];
        }

        int suffix = 1;
        for(int i = size - 1; i >=0; i--) {
            ret[i] *= suffix;
            suffix *= nums[i];
        }
        return ret;
    }
};
