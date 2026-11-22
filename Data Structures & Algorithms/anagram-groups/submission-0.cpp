class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>>mpp;
        for(auto x:strs){
            string val = x;
            sort(val.begin(), val.end());
            mpp[val].push_back(x);
        }
        vector<vector<string>>ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
