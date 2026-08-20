class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        stack<char> st;

        for(char c : s){
            if(map.count(c)){
                if(st.empty()) return false;

                char atTop = st.top();

                if(atTop != map[c]) return false;

                st.pop();
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
