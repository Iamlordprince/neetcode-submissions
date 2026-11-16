class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = 2 * n;
        vector<int>ans;
        int i = 0;
        while(i < n){
            ans.push_back(nums[i]);
            i++;
        }
        int j = 0;
        while(j < n){
            ans.push_back(nums[j]);
            j++;
        }

        return ans;
    }
};