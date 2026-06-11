class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> m;
        for(int i=0;i<n;i++){
            vector<int> c(26,0);
            int k=strs[i].length();
            for(int j=0;j<k;j++){
                c[strs[i][j]-'a']++;
            }
            string key="";
            for(int j=0;j<26;j++){
                key+=to_string(c[j])+'#';
            }
            m[key].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto x:m){
            res.push_back(x.second);
        }
        return res;
        
    }
};
