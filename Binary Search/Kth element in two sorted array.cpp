class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int count = 0, i=0, j=0, ans;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                ans = arr1[i++];
                count++;
            }
            else {
                ans = arr2[j++];
                count++;
            }
            if(count==k){
                return ans;
            }
        }
        if(i==n){
            j += (k - count) -1 ;
            return arr2[j];
        }
        else {
            i += (k - count) -1 ;
            return arr1[i];
        }
    }
};