class Solution {
public:
    string frequencySort(string s) {
       vector<int> freq(256,0);
       for (char ch:s){
        freq[ch]++;
       } // lambda function ke baare mai pdhna hai jab bhi revise kerne aao
       sort(s.begin(),s.end(), [&](char a, char b){
        if (freq[a]== freq[b]){
            return a>b;
        }
        return freq[a]>freq[b];
       });
       return s;
        
    }
};