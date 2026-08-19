class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       
        stack<int> st;

        for(string &c : tokens){
            if(c == "+" || c == "-" || c == "*" || c == "/"){
                if(st.empty()) return 0;
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();

                int ans = 0;

                if(c == "+") ans = y + x;
                if(c == "-") ans = y - x;
                if(c == "*") ans = y * x;
                if(c == "/") ans = y / x;

                st.push(ans);
            }else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};
