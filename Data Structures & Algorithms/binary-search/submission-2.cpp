class Solution {
public:

    int recusion(vector<int>& nums, int start, int end, int target) {
        if(start == end) {
            if(nums[start] != target) {
                return -1;
            } else {
                return start;
            }
        }
        int mid = (start + end)/2;
        if(nums[mid] == target) {
            return mid;
        }
        if(nums[mid] > target) {
            return recusion(nums, start, mid, target);
        } else {
            return recusion(nums, mid+1, end, target);
        }
    }
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        return recusion(nums, start, end, target);
    }
};
