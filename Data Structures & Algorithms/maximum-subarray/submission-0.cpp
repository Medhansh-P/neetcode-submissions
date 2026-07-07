class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum=nums[0],total=nums[0];
        for(int i=1;i<nums.size();i++){
            csum=max(csum+nums[i],nums[i]);
            total=max(total,csum);
        }
        return total;
    }
};
