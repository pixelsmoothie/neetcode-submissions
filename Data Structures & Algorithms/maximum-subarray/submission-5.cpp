class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int best = nums[0];
        int restart = 0;

        for(int i = 1; i < nums.size(); i++){
            curr = curr + nums[i];
            restart = nums[i];

            curr = max(restart, curr);

            best = max(curr, best);
        }
        return best;
    }
};
