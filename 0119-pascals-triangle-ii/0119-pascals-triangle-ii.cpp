class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(1,1);
        for (int i = 1; i <=rowIndex ; i++){
            ans.push_back(1);// isse size bhi badta hai 
            for (int j = i-1 ; j >0 ; j--){
            ans[j] = ans[j-1]+ans[j];// hm right to left ker rhe hai aur ulta decremtn ker rhe hai 
            }

        }
        return ans;
    }
};