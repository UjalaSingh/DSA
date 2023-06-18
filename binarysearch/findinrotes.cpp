#include <bits/stdc++.h>
using namespace std;
int search(int a[],int n,int x)
{
	int start=0,end=n-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(a[mid]==x)
		return mid;
		else if(a[mid]>=a[start])
		{
			if(x>=a[start]&&x<=a[mid])
			end=mid-1;
			else
			start=mid+1;
		}
		else
		{
			if(x>=a[mid]&&x<=a[end])
			start=mid+1;
			else
			end=mid-1;

		}
	}
	return -1;
}

// Driver code
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	cout<<search(a,n,x);
}
