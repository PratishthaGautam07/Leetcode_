class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int candidate = 0;
        for ( int i =0 ; i < nums.size();i++){
            int num = nums[i];
            if ( cnt == 0){
                candidate = num;
            }
            if ( candidate == num){
                cnt++;
            }
            else {
                cnt--;
            }
        }
        return candidate;
    }
};