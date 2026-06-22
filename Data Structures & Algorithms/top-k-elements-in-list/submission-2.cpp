class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxfreq=INT_MIN;
        for(pair p : mp){
            maxfreq=max(maxfreq,p.second);
        }
        vector<vector<int>> f(maxfreq+1);
        for(pair p : mp){
            f[p.second].push_back(p.first);
        }
        int i=maxfreq;
        while(i>=0 && k>0){
            if(!f[i].empty()){
                for(int l=0;l<f[i].size() && k>0;l++){
                    ans.push_back(f[i][l]);
                    k--;
                }
            }
            i--;
        }
        return ans;
    }
};
