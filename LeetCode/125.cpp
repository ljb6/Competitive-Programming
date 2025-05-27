class Solution {
public:
    bool isPalindrome(string s) {

        if (s.length() == 1) return true;
        
 
        string newStr = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i])) {
                newStr += tolower(s[i]);
            } 
        }

        int r = newStr.length() - 1;
        for (int l = 0; l < newStr.length()/2; l++) {
            if (newStr[l] != newStr[r]) return false;
            r--;
        }

        return true;
       
    }
};