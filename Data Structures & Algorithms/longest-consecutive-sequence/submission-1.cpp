class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto x:nums){
            s.insert(x);
        }
        int ans=0;
        for(auto x:s){
            if(s.count(x-1)){
                continue;
            }
            int len=1;
            while(s.count(x+1)){
                len++;
                x=x+1;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};
