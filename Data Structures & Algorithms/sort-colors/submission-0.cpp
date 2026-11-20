class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int z = 0;
        int o = 0;
        int t = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                z++;
            }else if(nums[i] == 1){
                o++;
            }else{
                t++;
            }
        }
        nums.clear();
        while(z){
            nums.push_back(0);
            z--;
        }
        while(o){
            nums.push_back(1);
            o--;
        }
        while(t){
            nums.push_back(2);
            t--;
        }

        
    }
};