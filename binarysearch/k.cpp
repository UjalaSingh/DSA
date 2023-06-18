//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
    int fo(int a[],int n,int x)
    {
        int start=0,end=n-1;
        int ans=0;
        while(start<=end)
        {
              int mid=(start+end)/2;
              if(a[mid]==x)
              {
                  ans=mid;
                  end=mid-1;
              }
              else if(a[mid]>x)
              {
                  end=mid-1;
              }
              else
              start=mid+1;
        }
        return 0;
    }
    int lo(int a[],int n,int x)
    {
        int start=0,end=n-1;
        int ans=0;
        while(start<=end)
        {
              int mid=(start+end)/2;
              if(a[mid]==x)
              {
                  ans=mid;
                  start=mid+1;
              }
              else if(a[mid]>x)
              {
                  end=mid-1;
              }
              else
              start=mid+1;
        }
        return 0;
    }
    
	int count(int arr[], int n, int x) {
	 int first=fo(arr,n,x);
     int second=lo(arr,n,x);
     cout<<first<<" "<<second<<endl;
     int ans=second-first+1;
     return ans;
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