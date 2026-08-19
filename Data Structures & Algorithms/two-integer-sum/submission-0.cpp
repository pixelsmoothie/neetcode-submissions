class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        int flag = 0;

        for(int i = 0; i<nums.size(); i++){
            if(flag == 1){
                break;
            }
            for(int j = 0; j<nums.size(); j++){
                if(i != j && nums[i] + nums[j] == target){
                    output.emplace_back(i);
                    output.emplace_back(j);
                    flag = 1;
                    break;
                }
            }
        }
        return output;
    }
};
