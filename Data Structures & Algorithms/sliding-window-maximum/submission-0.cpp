class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<pair<int,int>> dq;
        for(int i=0;i<k;i++){
            while(dq.size()&&dq.back().first<=nums[i]){
                dq.pop_back();
            }
            dq.push_back({nums[i],i});
        }
        vector<int> ans;
        ans.push_back(dq.front().first);
        for(int i=k;i<n;i++){
            if(i-dq.front().second>=k){
                dq.pop_front();
            }
            while(dq.size()&&dq.back().first<=nums[i]){
                dq.pop_back();
            }
            dq.push_back({nums[i],i});
            ans.push_back(dq.front().first);
        }
        return ans;
        
    }
};
