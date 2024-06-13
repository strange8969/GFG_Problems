//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.firstElement(n));
        }
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {
    static int firstElement(int n) {
        if(n==1){
            return 1;
        }
        long mod = 1000000007;
        long a=1, b=1, c=1, d=0;
        long k=1, l=1, m=1, u=0;
        
        for(int i=1; i<n;i++){
            long p = (a*k+b*l)%mod;
            long q = (a*m+b*u)%mod;
            long r = (c*k+d*l)%mod;
            long s = (c*m+d*u)%mod;
        
            a=p;
            b=q;
            c=r;
            d=s;
        
        
    }
    return (int)c;
}
    
}