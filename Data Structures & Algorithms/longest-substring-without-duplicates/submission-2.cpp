#bruteForce

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        int longest = INT_MIN;
        int left = 0;
        vector<bool> seen(256, false);

        for(int right = 0; right < s.size(); right++){
                while(seen[s[right]]){
                    seen[s[left]] = false;
                    left++;
                }

                seen[s[right]] = true;

                longest = max(longest, right - left + 1);
            }
        return longest;
    }
};
