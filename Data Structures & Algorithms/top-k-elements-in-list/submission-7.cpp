class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> ret;
        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>, std::greater<pair<int,int>>> que;
        for(const auto& itr: mpp) {
            que.push({itr.second,itr.first});
            if(que.size() > k) {
                que.pop();
            }
        }
        for(int i = 0; i < k; i++) {
            ret.push_back(que.top().second);
            que.pop();
        }
        return ret;
    }
};
