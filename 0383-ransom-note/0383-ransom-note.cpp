class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[1000000]={0};
        for(int i = 0; i<magazine.size();i++){
            hash[magazine[i]]+=1;
        }
        for(char c:ransomNote){
            if (hash[c]== 0){
                return false;
            }
            hash[c]--;
        }
        return true;
        
    }
};