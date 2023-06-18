int firstocc(int a[],int n,int x)
{
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==x)
        {
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>x)
        {
            e=n-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}