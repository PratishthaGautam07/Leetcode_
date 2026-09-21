class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()){
            return true;
        }
        string result  = "";
        for (char c:s){
            if(isalnum(c)){
                result += tolower(c);
            }
        }
        int i =0;
        int j = result.size()-1;//zero indexing hoti h 
       
            while(i<j){
                if(result[i]!= result[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        

        
    }
};