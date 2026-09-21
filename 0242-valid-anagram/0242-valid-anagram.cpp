class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       for(int i =0; i< s.size(); i++){
        if(s[i]!=t[i]){
            return false;// yaha hum true wali condition nhi rkh sakte kyunki fir woh pehla dekh ke hi true return kerdenga.
        }
       }
       return true;

        
    }
};