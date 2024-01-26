//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
    
    int missingCount = 0;
    for (int i = 1; i < n; i++) {
        int diff = a[i] - a[i - 1] - 1;
        if (missingCount + diff >= k) {
            // The kth missing element is in the range of the current sequence
            return a[i - 1] + k - missingCount;
        }
        missingCount += diff;
    }

    // If k is greater than the total missing elements in the array
    return -1;
}