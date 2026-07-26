class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        sort(nums.begin(), nums.end());
        for(int j = 0 ; j < (int)nums.size() - 1; j++){
                if(nums[j] == nums[j + 1]){
                    return true;
                }
            }
        return false;
    }

};