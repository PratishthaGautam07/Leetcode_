class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() -1;
        //normal space se aage badane ke liye
        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;
            }
            while(left<right && !isalnum(s[right])){
                right--;
            }
            // umm palindrom nhi hai yeh check kerne ke liye
            
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};