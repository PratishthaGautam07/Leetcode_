class Solution {
public:
    bool check(vector<int>& nums) {
        int pause=0;
        for (int i =0; i<nums.size();i++){
            if(nums[i]>nums[(i+1) % nums.size()]){
                pause++;
            }
        }
        if(pause<2){
            return true;
        }
        return false;
        
    }
};