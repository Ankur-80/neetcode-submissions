class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int xor1 = 0, xor2 = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i <= size; i++) {
            xor1 ^= i;
        }
        for(int i = 0; i < size; i++) {
            xor2 ^= nums[i];
        }
        return (xor1 ^ xor2);
    }
};
