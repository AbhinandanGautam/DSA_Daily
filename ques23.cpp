//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> a, int n) {
	    // code here
	    long long int maxi=1,mini=1,largest=0;
	    for(auto x:a)
	    {
	        if(x>0)
	        {
	            maxi*=x;
	            mini=min(x,x*mini);
	            largest=max(largest,maxi);
	        }
	        else if(x<0)
	        {
	            maxi=max(x,mini*x);
	            mini=min(x,x*maxi);
	             largest=max(largest,maxi);
	        }
	        
	        else
	        {
	            mini=1;
	            maxi=1;
	            continue;
	        }
	    }
	    return largest;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends