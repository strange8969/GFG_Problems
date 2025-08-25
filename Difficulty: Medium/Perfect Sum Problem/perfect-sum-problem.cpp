class Solution {
  public:
  int countZero(vector<int>& arr, int i){
      return count(arr.begin(),arr.begin()+i,0);
  }
  int t[1000+2][1000+2];
    int perfectSum(vector<int>& arr, int target) {
        int n = arr.size();
        for(int i=0;i<n+1;i++){
            for(int j=0;j<target+1;j++){
                if(i==0) t[i][j] = 0;
                if(j==0) t[i][j] = pow(2,countZero(arr,i));
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<target+1;j++){
                if(arr[i-1] <= j){
                    t[i][j] = t[i-1][j] + t[i-1][j-arr[i-1]];
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[n][target];
    }
};