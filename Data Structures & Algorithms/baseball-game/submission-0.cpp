class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string op:operations){
            if(op == "C"){
                if(!st.empty()){
                    st.pop();
                }
            }else if(op == "D"){
                if(!st.empty()){
                    int top = st.top() * 2;
                    st.push(top);
                }
            }else if(op == "+"){
                if(st.size() >= 2){
                    int top1 = st.top();
                    st.pop();
                    int top2 = st.top();
                    int sum = top1 + top2;
                    st.push(top1);
                    st.push(sum);
                }
            }else{
                st.push(stoi(op));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};