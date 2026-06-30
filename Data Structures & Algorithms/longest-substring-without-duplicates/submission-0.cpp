class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i=0,j,len,maxlen=0;
        while(i<s.size() && st.find(s[i])==st.end()){
            st.insert(s[i]);
            i++;
        }
        j=0;
        len=i-j;
        maxlen=max(maxlen,len);
        while(i<s.size()){
            if(st.find(s[i])!=st.end()){
                st.erase(s[j]);
                j++;
            }
            else{
                st.insert(s[i]);
                i++;
                len=i-j;
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};
