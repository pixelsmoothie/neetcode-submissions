class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> check;

        for(auto num : nums){
            if(!check.insert(num).second){
                return true;
            }else{
                check.insert(num);
            }
        }
        return false;
    }
};