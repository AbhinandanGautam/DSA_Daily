// Triplet Sum

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n); 
        for(int i=0; i<n ; i++){
            int tar=X-A[i]; 
            int lo=i+1; 
            int hi=n-1; 
            while(lo<hi){
                if(A[lo]+A[hi]==tar) return true; 
                else if(A[lo]+A[hi]>tar) hi--; 
                else lo++; 
            }
        }
        return false; 
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends