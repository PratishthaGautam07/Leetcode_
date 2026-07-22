class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        // making row 
        for (int i = 0; i<numRows ; i++){
            vector<int>row(i+1,1);// har row ka vector<int>(element,intially element)
        
        // filling middle element 
        for (int j = 1; j<i;j++){
            row[j]= ans[i-1][j-1] + ans[i-1][j];// main logic

        }
        ans.push_back(row);
        }
        return ans;
        
    }
};