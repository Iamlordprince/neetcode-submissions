class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mpp){
            v.push_back({it.second, it.first});
        }
        vector<int>ans;
        sort(v.rbegin(), v.rend());
        for(int i=0;i<v.size() and i < k;i++){
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
