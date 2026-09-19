class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int cnt = 0;
        int maxi = 0;
        sort(nums.begin(),nums.end());
        for (int i = 0; i< nums.size()-1;i++){
            if (nums[i]== nums[i+1]){
                continue;
            }
             else if(nums[i+1]== nums[i]+1){
                cnt++;
            }
            else {
                cnt = 0;
            }
            maxi = max(maxi,cnt);
        }
        return maxi+1;
        
    }
};