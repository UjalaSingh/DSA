#include <bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
     int count=1;
	    int val=a[0];
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]==val)
	        {
	            count++;
	        }
	        else if(count%2!=0)
	        {
	            return false;
	        }
	        else
	        {
	            val=a[i];
	            count=1;
	        }
	    }
	    
	    if(count%2==0)
	    return true;
	    else
	    return false;
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	   sort(arr,arr+n);
	   bool ans=check(arr,n);
	   if(ans==true)
	   cout<<"yes";
	   else
	   cout<<"no";
	   cout<<endl;
	   
	    
	}
	
	return 0;
}