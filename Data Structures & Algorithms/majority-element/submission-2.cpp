class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote=0,candidate=nums[0];
        for(int i=0;i<nums.size();i++){
            if(candidate==nums[i]) vote++;
            else vote--;
            if(vote<=0) candidate=nums[i];
        }
        return candidate;
    }
};