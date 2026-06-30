class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea=0;
        int i=0,j=heights.size()-1;
        while(i<j){
            int area=min(heights[i],heights[j])*(j-i);
            maxArea=max(maxArea,area);
            if(i<j && heights[i]>heights[j]) j--;
            else if(i<j && heights[j]>=heights[i]) i++;
            
        }
        return maxArea;
    }
};
