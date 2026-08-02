class Solution {
public:
    int binarysearch(vector<int>& nums, int first, int last, int target){
        if(first > last ) return -1;
        int mid = first + (last - first) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) return binarysearch(nums, mid + 1 , last, target);
        else{
            return binarysearch(nums, first,mid -1, target );
        }
    }
    int search(vector<int>& nums, int target) {
        return binarysearch(nums, 0, nums.size() -1 , target);
    }
};
