class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        string sorted1 = s1;
        sort(sorted1.begin(), sorted1.end());
        int n = s1.size();
        int left = 0;
        int right = n - 1;
        while(right < s2.size()){
            string sorted2 = s2.substr(left, n);
            sort(sorted2.begin(), sorted2.end());
            if(sorted1 == sorted2){
                return true;
            }
            else{
                left++;
                right++;
            }
        }
        return false;
    }
};
