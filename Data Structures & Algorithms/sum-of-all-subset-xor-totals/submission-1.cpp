class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<int> temp;
        long long sum=0,t;
        for(int i=0;i<pow(2,nums.size());i++){
            t=0;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)){
                    t=t^nums[j];
                }
            }
            sum+=t;
        }
        return sum;
    }
};