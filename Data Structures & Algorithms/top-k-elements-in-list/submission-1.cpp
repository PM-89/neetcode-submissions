class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x:m){
            pq.push({x.second,x.first});
        }
        vector<int> res;
        for(int i=0;i<k;i++){
            auto t=pq.top();
            res.push_back(t.second);
            pq.pop();
        }
        return res;
        
    }
};
