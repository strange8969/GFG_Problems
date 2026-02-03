class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int n = s.length();
        int i = 0;
        int j = n-1;
        
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};