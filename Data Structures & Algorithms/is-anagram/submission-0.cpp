class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int k=t.length();
        if(k!=n){
            return false;
        }
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        for(int i=0;i<n;i++){
            m[t[i]]--;
        }
        for(auto x:m){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};
