class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
       temp.insert(temp.end(), nums.begin(), nums.end());
        int i =0;
        int j = temp.size()-1; 
        sort(temp.begin(),temp.end());
       
        while(i<j){
        int sum = temp[i]+temp[j];
            if (sum>target){
                j--;
            }
            else if (sum<target){
                i++;
            }
            else {
                int value1 = temp[i];
                int value2 = temp[j];
                int index1 = -1;
                 int index2 = -1;
                 for (int k = 0; k < nums.size(); k++) {
                      if (nums[k] == value1 && index1 == -1) {
                     index1 = k;
                     }
    
                     if (nums[k] == value2 && index2 == -1 && k != index1) {
                     index2 = k;
                      }
                       }
                    return {index1,index2};
            }
           
        }
return {};
      
    }
};