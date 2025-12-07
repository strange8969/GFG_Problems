// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int result = -1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(x == arr[mid]) {
                result = mid;
                end = mid - 1; 
            } else if(x < arr[mid]) {
                result = mid;
                end = mid - 1; 
            } else {
                start = mid + 1; 
            }
        }

        return result;
    }
};