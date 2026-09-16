class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     k = k% nums.size();
     if (k==0 || nums.size()==0){
        return;
     }
        reverse (nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin(),nums.end());
        
    }
};