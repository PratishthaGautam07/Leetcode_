class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int cnt1 = 0;
        int cnt2 = 0;
        int cand1 = 0;
        int cand2 = 0;
        for ( int i = 0; i< nums.size();i++){
            int var = nums[i];
            if ( cnt1 == 0 && var != cand2){
                cand1 = var;
                cnt1++;
            }
            else if ( var == cand1){
                cnt1++;
            }
             else if ( cnt2 == 0 && var != cand1){
                cand2 = var;
                cnt2++;
            }
            else if ( var == cand2){
                cnt2++;
            }
            else {
                cnt1 --;
                cnt2 --;

            }
        }
        // for verification 
        cnt1 =0;
        cnt2 = 0;
        for (  int i =0; i< nums.size(); i++){
             int var = nums[i];
            if ( cand1 == var ){
                cnt1++;
            }
            else if ( cand2 == var){
                cnt2++;
            }
        }
        if ( cnt1 > nums.size()/3){
            ans.push_back(cand1);
        }
         if ( cnt2 > nums.size()/3){
            ans.push_back(cand2);
        }
        return ans;
        
    }
};