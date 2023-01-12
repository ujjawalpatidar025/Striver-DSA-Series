pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int x1=-1,y=-1,c=n-1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=x)
        {
            x1=arr[i];
        }
        if(arr[c]>=x)
        {
            y=arr[c];
        }
        c--;
    }
    return {x1,y};
}