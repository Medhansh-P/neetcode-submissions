class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s : tokens){
            if(!(s=="+" || s=="-" || s=="*" || s=="/")){
                st.push(stoi(s));
                continue;
            }
            int n1=st.top();
            st.pop();
            int n2=st.top();
            st.pop();
            if(s=="+"){
                st.push(n1+n2);
            }
            if(s=="-"){
                st.push(n2-n1);
            }
            if(s=="*"){
                st.push(n1*n2);
            }
            if(s=="/"){
                if(n1==0) st.push(0);
                else st.push(n2/n1);
            }
        }
        if(st.empty()) return 0;
        return st.top();
    }
};
