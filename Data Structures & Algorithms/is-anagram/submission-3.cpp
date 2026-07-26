class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int> hashset;
    if(s.size() == t.size()){
        for(char n : s){
            hashset[n]++;
        }
        for(char n : t){
            if(hashset[n] == 0){
                return false;
            }
            hashset[n]--;
        }
        return true;
    }
    return false;
    }
};
