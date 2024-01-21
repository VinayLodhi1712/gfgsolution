//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr, arr + size);  // Sort the array in ascending order
    
    // Initialize two pointers, left and right
    int left = 0, right = 1;
    
    while (right < size && left < size) {
        int diff = arr[right] - arr[left];
        
        if (left != right && diff == n) {
            return true;
        } else if (diff > n) {
            left++;
        } else {
            right++;
        }
    }
    
    return false;
    
}