// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.length();
        string result = "";
        for(int i=n-1;i>=0;i--){
            result+=s[i];
        }
        return result;
    }
};
