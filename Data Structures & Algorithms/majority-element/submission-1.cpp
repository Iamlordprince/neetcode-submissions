class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        int ans = 0;
        int cnt = 0;
        for(auto it:mpp){
            if(it.second > cnt){
                ans = it.first;
                cnt = it.second;
            }
        }
        return ans;
    }
};