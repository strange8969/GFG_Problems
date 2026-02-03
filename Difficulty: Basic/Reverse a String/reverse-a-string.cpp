// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.length();
        string str(n,0);
        for(int i=0;i<n;i++){
            str[i] = s[n-i-1];
        }
        return str;
    }
};
