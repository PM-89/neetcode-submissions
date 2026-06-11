class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int n=nums.size();
        unordered_set<int> s;
        int idx1;
        int idx2;
        for(int i=0;i<n;i++){
            if(s.find(target-nums[i])!=s.end()){
                res[1]=i;
            }
            s.insert(nums[i]);
        }
        for(int i=0;i<res[1];i++){
            if(nums[i]+nums[res[1]]==target){
                res[0]=i;
                return res;
            }
        }
        
    }
};
