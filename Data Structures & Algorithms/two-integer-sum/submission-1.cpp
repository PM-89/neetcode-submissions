class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(target-nums[i])!=m.end()){
                res[0]=m[target-nums[i]];
                res[1]=i;
                return res;
            }
            m[nums[i]]=i;
        }
    }
};
