class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]] = i;
        }
        for(int i=0;i<n;i++){
            int sum = target - nums[i];
            if(mpp.find(sum) != mpp.end()){
                if(i == mpp[sum]){
                    continue;
                }
                return {i, mpp[sum]};
            }
        }
        return {-1, -1};
    }
};
