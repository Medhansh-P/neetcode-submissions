class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            vector<int> hash(26,0);
            for(int j=0;j<strs[i].size();j++){
                hash[strs[i][j]-'a']++;
            }
            mp[hash].push_back(strs[i]);
        }
        for(auto &s : mp){
            ans.push_back(s.second);
        }
        return ans;
    }
};
