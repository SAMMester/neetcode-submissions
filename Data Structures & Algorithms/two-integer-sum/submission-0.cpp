class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> hashset;
        for(int i = 0; i < nums.size(); i++){
            hashset[nums[i]] = i;
        }
        
        for(int i = 0; i < nums.size(); i++){
            int temp = 0;
            temp = target - nums[i];
            if (hashset.count(temp) && hashset[temp] != i){
                result[0] = i;
                result[1] = hashset[temp];
                return result;
            }
        }
        return result;
    }

};