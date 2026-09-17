class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt =0;
        int maxi = 0;
        int j =0;
        for (int i =0;i<nums.size();i++){
            if(nums[i]!=1)
            { 
                cnt = i-j; 
                maxi = max(maxi,cnt);
                j=i+1;
        }
        if(i == nums.size()-1) 
        { 
            cnt = i-j+1; 
            maxi = max(maxi,cnt);
            }
        
    }
    return maxi;
    }
};