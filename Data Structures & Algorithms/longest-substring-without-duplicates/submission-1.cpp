class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        int longest = INT_MIN;

        for(int i = 0; i < s.size(); i++){
            vector<bool> seen(256, false);
            for(int j = i; j < s.size(); j++){
                if(seen[s[j]]){
                    break;
                }

                seen[s[j]] = true;

                longest = max(longest, j - i + 1);
            }
        }
        return longest;
    }
};
