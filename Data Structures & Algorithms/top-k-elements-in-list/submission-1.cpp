class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        vector<int> ret;
        priority_queue<pair<int,int>> que;
        for(int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]]++;
        }
        for(auto itr : hash) {
            que.push(pair(itr.second,itr.first));
        }
        for(int i = 0; i < k; i++) {
            auto temp = que.top();
            ret.push_back(temp.second);
            que.pop();
        }
        return ret;
    }
};
