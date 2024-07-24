//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        
        int n = arr.size();
        int largest = arr[0];
        int slargest = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                slargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest and arr[i]>slargest){
                slargest = arr[i];
            }
            else if(n==1){
                return -1;
            }
        }
        return slargest;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends