class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int flag=1;
        sort(strs.begin(),strs.end());
        for(int i=0;i<strs[0].size() && flag;i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size() && flag;j++){
                if(strs[j][i]!=c) flag=0;
            }
            if(flag){
                ans+=c;
            }
        }
        return ans;
    }
};