class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        

    vector<char> current;
    int max = 0;

    for (int i = 0; i < s.size(); i++) {

        // agar element already current mein hai
        while (find(current.begin(), current.end(), s[i]) != current.end()) {
            current.erase(current.begin());   // 0th element hatao
        }

        // ab element duplicate nahi hai
        current.push_back(s[i]);

        // maximum length save karo
        if (current.size() > max) {
            max = current.size();
        }
    }

    return max;
}
        
    
};