class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mval=prices[0],mprof=0;
        for(int i=0;i<prices.size();i++){
            mval=min(mval,prices[i]);
            if(prices[i]-mval >= mprof) mprof=prices[i]-mval;
        }
        return mprof;
    }
};
