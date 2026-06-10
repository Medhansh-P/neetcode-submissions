class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(mp.contains(nums[i]) && mp[nums[i]]!=i && abs(mp[nums[i]]-i)<=k){
                return true;
            }
        }
        return false;
    }
};