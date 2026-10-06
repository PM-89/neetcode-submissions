class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m1;
        for(auto x:t){
            m1[x]++;
        }
        unordered_map<char,int> m2;
        int cnt=m1.size();
        int n=s.size();
        int left=0;
        string ans="";
        for(int right=0;right<n;right++){
            if(!m1.count(s[right])){
                continue;
            }
            m2[s[right]]++;
            if(m1[s[right]]==m2[s[right]]){
                cnt--;
            }
            if(cnt!=0){
                continue;
            }
            while(left<=right&&(!m1.count(s[left])||m2[s[left]]>m1[s[left]])){
                if(m1.count(s[left])){
                    m2[s[left]]--;
                }
                left++;
            }
            string temp=s.substr(left,right-left+1);
            if(ans==""||temp.size()<ans.size()){
                ans=temp;
            }
            m2[s[left]]--;
            left++;
            cnt++;
        }
        return ans;
        
    }
};
