class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0;
        for(i=0;j<nums.size();i++){
            while(j<nums.size() && nums[j]==val){
                j++;
            }
            if(j < nums.size()) {
                nums[i]=nums[j];
                j++;
            } else {
                break;
            }
        }
        return i;
    }
};