class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++){
            int n=strs[i].size();
            res+=to_string(n)+'@'+strs[i];
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        int n=s.size();
        while(i<n){
            int j=i;
            while(j<n&&(s[j]>='0'&&s[j]<='9')){
                j++;
            }
            string len=s.substr(i,j-i);
            int m=stoi(len);
            j++;
            string t=s.substr(j,m);
            res.push_back(t);
            i=j+m;
        }
        return res;

    }
};
