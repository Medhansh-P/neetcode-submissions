class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ans=0,t1,t2;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="D"){
                t1=s.top();
                s.push(t1*2);
            }
            else if(operations[i]=="+"){

                t1=s.top();
                s.pop();
                t2=s.top();
                s.pop();
                s.push(t2);
                s.push(t1);
                s.push(t1+t2);
            }
            else if(operations[i]=="C"){
                s.pop();
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};