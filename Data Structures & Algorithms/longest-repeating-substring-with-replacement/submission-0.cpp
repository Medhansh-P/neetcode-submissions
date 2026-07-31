class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0,mfreq=0;
        unordered_map<char,int> mp;
        int i=0,j=0;
        while(i<s.size()){
            mp[s[i]-'A']++;
            mfreq=max(mfreq,mp[s[i]-'A']);
            if(i-j+1-mfreq > k){
                mp[s[j]-'A']--;
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};
