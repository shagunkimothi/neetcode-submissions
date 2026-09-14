class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(char c:s){
            if(isalnum(c)){
                ss+=tolower(c);

            }
        }
        string reverssed=ss;
        reverse(reverssed.begin(),reverssed.end());
        return ss==reverssed;
    }
};
