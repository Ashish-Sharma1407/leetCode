// Last updated: 6/27/2025, 2:30:35 AM
class Solution {
public:
    bool isAlphaNum(char ch){
        if((ch >= '0' && ch <= '9') ||
            tolower(ch) >= 'a' && tolower(ch) <= 'z'){
                return true;
            }else{
                return false;
            }
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start < end){
            if(!isAlphaNum(s[start])){
                start++;
                continue;
            }
            if(!isAlphaNum(s[end])){
                end--;
                continue;
            }

            if(tolower(s[start]) != tolower(s[end])){
                return false;
            } else{
                start++;
                end--;
            }
        }
        return true;
    }
};