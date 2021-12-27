int ans=-1;
bool isvalid(vector<int> &arr, int n, int k, int mid)
{
    int student = 1;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp += arr[i];
        
        if(temp > mid)
        {
            student++;
            temp = arr[i];
        }
        
        if(student > k)
        return false;
    }
    return true;
}
int binarysearch(vector<int> &arr, int n, int sum, int k, int mx)
{
    if(k > n)
    return -1;
    
    int start = mx;
    int end = sum;
    
    while(start <= end)
    {
        int mid = (end+start)/2;
        
        if( isvalid(arr,n,k,mid) == true)
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return ans;
}
int Solution::books(vector<int> &A, int B) {
    int sum=0;
    int n=A.size(),mx = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        sum += A[i];
        mx = max(mx,A[i]);
    }
    
    ans = binarysearch(A,n,sum,B,mx);
    return ans;
}
