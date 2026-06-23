class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int> st;
        for(int num:arr){
            int need = target-num;
            if(st.count(need)){
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};