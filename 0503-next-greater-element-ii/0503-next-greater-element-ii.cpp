class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result(nums.size(),-1);
        stack<int> st;
        for(int i = 0 ; i< 2*nums.size();i++){
            int index = i% nums.size();// yeh use kerna hai !
            while (!st.empty()&& nums[index]>nums[st.top()]){
                int ind = st.top();
                st.pop();
                result[ind]= nums[index];
            }
            st.push(index);
        }
        return result;
        
    }
};