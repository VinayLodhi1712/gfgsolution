//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    if(m==1)
	      return 1;
	    int low=2,high=m;
	    while(low<=high)
	    {
	        int mid=(low+high)>>1;
	        long long val=pow(mid,n);
	        if(val==m)
	          return mid;
	        else if(val>m or val<0) // val<0 is to tackle the overflow of integer
	          high=mid-1;
	        else
	          low=mid+1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends