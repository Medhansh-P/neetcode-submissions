class Solution {
public:

    string encode(vector<string>& strs) {
        string coded = "";
        for (int i = 0; i < strs.size(); i++) {
            coded += to_string(strs[i].size()) + "#";
            coded += strs[i];
        }
        return coded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // find '#'
            while (s[j] != '#') j++;

            // extract length
            int len = stoi(s.substr(i, j - i));

            // extract string
            string word = s.substr(j + 1, len);
            ans.push_back(word);

            // move pointer
            i = j + 1 + len;
        }

        return ans;
    }
};