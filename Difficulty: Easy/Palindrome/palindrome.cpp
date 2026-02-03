class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        string s = to_string(abs(n));
        int num = s.length();
        int i = 0;
        int j = num-1;
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