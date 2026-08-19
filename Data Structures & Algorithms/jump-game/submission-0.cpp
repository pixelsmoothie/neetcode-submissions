class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump = 0;
        int restart = 0;

        while(jump <= restart){
            if(jump >= nums.size() - 1){
                return true;
            }

            int potential_rn = jump + nums[jump];

            restart = max(restart, potential_rn);

            jump++;
        }
        return false;
    }
};
