class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> ans;
        int i = 0;  // negative
        int j = 0;  // positive

        for (int jiya = 0; jiya < nums.size(); jiya++) {

            if (jiya % 2 == 0) {   // positive position

                while (nums[j] < 0) {
                    j++;
                }

                ans.push_back(nums[j]);
                j++;
            }

            else {                 // negative position

                while (nums[i] > 0) {
                    i++;
                }

                ans.push_back(nums[i]);
                i++;
            }
        }

        return ans;
    }
};