// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long nums[], long long l, long long h, long long mid){
        long long count = 0;
        long long j = mid+1;
        for(long long i=l;i<=mid;i++){
            while(j<=h && nums[i] > nums[j]){
                j++;
            }
            count += (j - (mid+1));
        }

        vector<long long> temp;
        long long i = l;
        long long k = mid +1;
        while(i<=mid && k<=h){
            if(nums[i] <= nums[k]){
                temp.push_back(nums[i++]);
            }
            else
                temp.push_back(nums[k++]);
        }
        while(i <= mid){
            temp.push_back(nums[i++]);
        }
        while(k <= h){
            temp.push_back(nums[k++]);
        }
        for(long long i=l;i<=h;i++){
            nums[i] = temp[i-l];
        }
        return count;
    }
    
    long long sort(long long nums[], long long lo, long long hi){
        if(lo>=hi)return 0;
        long long mid = lo + (hi-lo)/2;
        long long ans = sort(nums,lo,mid);
        ans += sort(nums,mid+1,hi);
        ans += merge(nums,lo,hi,mid);
        
        return ans;
    }
    
    
    long long int inversionCount(long long arr[], long long N)
    {
        return sort(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends