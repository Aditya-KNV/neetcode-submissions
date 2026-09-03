class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c : tokens) {
            if(st.empty() && !(c == "+" || c == "-" || c == "*" || c == "/") ) st.push(stoi(c));
            else if(st.empty()) return -1;
            else {
                if(c == "+" || c == "-" || c == "*" || c == "/") {
                    int primary = st.top(); st.pop();
                    int secondary = st.top(); st.pop();
                    if(c == "+") {
                        st.push(primary + secondary);
                    }
                    else if(c == "-") {
                        st.push(secondary - primary);
                    }
                    else if(c == "*") {
                        st.push(primary * secondary);
                    }
                    else if(c == "/") {
                        st.push(secondary / primary);
                    }
                }
                else {
                    st.push(stoi(c));
                }
            }
        }
        return st.top();
    }
};
