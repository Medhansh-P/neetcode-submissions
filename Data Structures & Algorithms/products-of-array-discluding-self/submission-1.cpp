class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<long long> l(nums.size(),1),r(nums.size(),1);
        for(int i=r.size()-2;i>=0;i--){
            r[i]=r[i+1]*nums[i+1];
        }
        for(int i=1;i<l.size();i++){
            l[i]=l[i-1]*nums[i-1];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(r[i]*l[i]);
        }
        return ans;
    }
};
