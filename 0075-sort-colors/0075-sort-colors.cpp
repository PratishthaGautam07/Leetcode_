class Solution {
public:
    void sortColors(vector<int>& nums) {
         int j = 0; //precedance ka yaad rkhna hota hai.
        int k = nums.size()-1;
        for (int i =0; i<= k;i++){
            if (nums[i]==2){
                swap(nums[i],nums[k]);
                k--;
                i--;
            }
            else if (nums[i]==0){
                 swap(nums[i],nums[j]);
                 j++;
            }
           

        
        }
        
    }
};