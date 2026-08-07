class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> que;
        for(auto itr : hash) {
            que.push(pair(itr.second,itr.first));
            if(que.size() > k) {
                que.pop();
            }
        }
        vector<int> ret;
        for(int i = 0; i < k; i++) {
            auto temp = que.top();
            ret.push_back(temp.second);
            que.pop();
        }
        return ret;
    }
};
