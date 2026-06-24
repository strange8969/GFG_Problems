class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> mp;
        mp.insert({0,-1});
        int sum = 0;
        int maxLen = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            sum += arr[i];
            int need = sum-k;
            if(mp.count(need)){
                int Len = i-mp[need];
                maxLen = max(maxLen,Len);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return maxLen;
    }
};