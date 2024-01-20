//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr + n);
        sort(dep, dep + n);

        // Initialize pointers and platform count
        int i = 0, j = 0, platforms = 0, maxPlatforms = 0;

        // Traverse both arrays simultaneously
        while (i < n && j < n) {
            // If a train is arriving before or at the same time as the departure of another train
            if (arr[i] <= dep[j]) {
                platforms += 1;
                i += 1;
            } else {  // If a train is departing before the arrival of another train
                platforms -= 1;
                j += 1;
            }

            // Update the maximum platforms required at any given time
            maxPlatforms = max(maxPlatforms, platforms);
        }

        return maxPlatforms;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends