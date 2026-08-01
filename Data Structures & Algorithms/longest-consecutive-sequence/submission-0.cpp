class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int tempcount = 1;
        int count = 0;
        for(int i = 1; i < nums.size(); i++){ 
            if(nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] == nums[i-1] + 1){
                tempcount++;
            }
            else{
                count = max(count, tempcount);
                tempcount = 1;
            }
        }
        return max(tempcount,count);
    }   
};
