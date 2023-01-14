class Solution{
public:	
	int findKRotation(int a[], int n) {
	    for(int i=1;i<n;i++)
	    {
	          if(a[i]<a[i-1])return i;
	   }
	   return 0;
	}

};