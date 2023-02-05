//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n<=1){
            return 0;
        }
        
        pair<int ,int>interval{0,0};
        int jumps=0;
        
        while(true){
            jumps++;
            int can_reach=-1;
            for(int i=interval.first;i<=interval.second;i++){
                can_reach=max(can_reach,i+arr[i]);
            }
            
            if(can_reach>=n-1){
                return jumps;
            }
            
            interval={interval.second+1,can_reach};
            
            if(interval.first>interval.second){
                return -1;
            }
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends