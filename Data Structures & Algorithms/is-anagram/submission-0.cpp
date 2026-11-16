class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if(s.size() != t.size()){
            return false;
        }
        map<char,int>mpp;
        for(int i:s){
            mpp[i]++;
        }
        for(int i:t){
            mpp[i]--;
        }
        for(auto it:mpp){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};
