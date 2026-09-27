class Solution {
public:
 int  binarySearch(vector<int>& nums,int low,int high,int key){
         if(low > high){
            return -1;
        }
       int mid = (low+high)/2;
       if(nums[mid]< key){
        return binarySearch(nums,mid+1,high,key);
       }
       else if (nums[mid] == key){
        return mid;
       }
       else {
        return binarySearch(nums,low,mid-1,key);
       }
       }
    int search(vector<int>& nums, int target) {
       return  binarySearch(nums,0,nums.size()-1,target);
       
        
    }
};