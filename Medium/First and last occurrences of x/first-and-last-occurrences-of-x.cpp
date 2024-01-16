//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
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
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends