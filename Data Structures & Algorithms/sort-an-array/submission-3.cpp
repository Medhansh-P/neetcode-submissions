class Solution {
public:
    vector<int> merge(vector<int>& nums1,vector<int>& nums2){
        vector<int> ans;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        return ans;
    }
    vector<int> MergeSort(vector<int>& nums,int i,int j){
        if(i==j){
            return {nums[i]};
        }
        int m=(i+j)/2;
        vector<int> l=MergeSort(nums,i,m);
        vector<int> r=MergeSort(nums,m+1,j);
        return merge(l,r);
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans;
        ans=MergeSort(nums,0,nums.size()-1);
        return ans;
    }
};