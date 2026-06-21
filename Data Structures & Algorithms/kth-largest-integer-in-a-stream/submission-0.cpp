class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int given;
public:
    KthLargest(int k, vector<int>& nums) {
        given=k;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(pq.size()>k){
            pq.pop();
        }
    }
    int add(int val) {
        pq.push(val);
        while(pq.size()>given){
            pq.pop();
        }
        return pq.top();
    }
};
