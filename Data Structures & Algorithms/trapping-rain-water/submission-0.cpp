class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()){
            return 0;
        }
        int totalwater = 0;
        int n = height.size();
        for(int i = 1; i< n; i++){
            int left = height[i];
            int right = height[i];
            for(int j  = 0; j<i ; j++){
                left = max(left, height[j]);
            }
            for(int k = i+1; k < n; k++){
                right = max(right, height[k]);
            }
            totalwater += min(left, right) - height[i];
        }

        return totalwater;
    }
};
