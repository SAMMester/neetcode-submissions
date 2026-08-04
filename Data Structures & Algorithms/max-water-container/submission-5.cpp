class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater = 0;;
        int i = 0;
        int j = heights.size() - 1;
        
        while(i < j){
            int water = min(heights[i] , heights[j]) * (j - i);
            maxwater = max(maxwater , water);
            if(heights[i] <= heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxwater;
    }
};
