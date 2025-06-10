class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int i=0;
        int j=0;
        int n = arr.size();
        int sum = 0;
        int mx = INT_MIN;
        while(j<n){
            sum += arr[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                mx = max(sum,mx);
                sum-=arr[i];
                i++;
                j++;
            }
        }
        return mx;
    }
};