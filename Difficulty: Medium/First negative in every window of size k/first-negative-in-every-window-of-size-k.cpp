class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int i=0;
        int j=0;
        queue <int> v;
        vector <int> result;
        int n = arr.size();
        
        while(j<n){
            if(arr[j]<0){
                v.push(arr[j]);
            }
            if(j-i+1 < k){
                j++;
            }else if(j-i+1==k){
                if(v.size()==0){
                    result.push_back(0);
                }else{
                result.push_back(v.front());
                if(arr[i]==v.front()){
                v.pop();}
                }
                i++;
                j++;
            }
        }
        return result;
    }
};