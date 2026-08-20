class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int s = temperatures.size();
        vector<int> res(s, 0);

        for(int i = s - 1; i >= 0; i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }

            if(!st.empty()){
                res[i] = st.top() - i;
            }

            st.push(i);
        }
        return res;
    }
};
