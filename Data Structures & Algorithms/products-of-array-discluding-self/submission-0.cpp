class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }
        }
        vector<int> res(n,0);
        if(c>=2){
            return res;
        }
        else if(c==1){
            int idx;
            int pro=1;
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    pro*=nums[i];
                }
                else{
                    idx=i;
                }
            }
            res[idx]=pro;
            return res;
        }
        else{
            int pro=1;
            for(int i=0;i<n;i++){
                pro*=nums[i];
            }
            for(int i=0;i<n;i++){
                res[i]=pro/nums[i];
            }
            return res;
        }

    }
};
