class Solution {
public:
    void reverseString(vector<char>& s) {
        string ans = "";
        stack<char> st;
        for(auto i : s)st.push(i);
        s.clear();
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
    }
};