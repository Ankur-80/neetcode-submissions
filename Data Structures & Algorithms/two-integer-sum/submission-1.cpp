class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> ret;
     map<int,int> hash;
     for(int i = 0; i < nums.size(); i++)
     {
        int diff = target - nums[i];
        auto itr = hash.find(diff);
        if(itr != hash.end())
        {
            ret.push_back(itr->second);
            ret.push_back(i);
            break;
        } else {
            hash[nums[i]] = i;
        }
     }
     return ret;
    }
};
