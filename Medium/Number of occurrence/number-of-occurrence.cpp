//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int firstocc(int nums[],int target,int n){
        int first=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                first = mid;
                high = mid - 1;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return first;
    }
    int lastocc(int nums[],int target, int n){
        int last=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                last = mid;
                low=mid+1;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return last;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> result(2,-1);
        int first=firstocc(arr,x,n);
        int last=lastocc(arr,x,n);
        result[0]=first;
        result[1]=last;
        return result;
    }
	int count(int arr[], int n, int x) {
	    // code here
	    std::vector<int> ans = find(arr, n, x);
        if (ans[0] == -1)
          return 0;
        return (ans[1] - ans[0] + 1);
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends