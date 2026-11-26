class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int i:nums){
            st.insert(i);
        }
        int cnt = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            if(st.find(nums[i]) != st.end() and st.find(nums[i]-1) == st.end()){
            int val = nums[i];
            int res = 0;
            while(st.find(val) != st.end()){
                val++;
                res++;
            }
            maxi = max(maxi, res);
            }
        }
        return maxi;

    }
};
