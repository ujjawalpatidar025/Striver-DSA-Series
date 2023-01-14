int smaller(vector<int>& arr,int x)

    {

        int n = arr.size();

        int low=0,high=n-1;

        int mid;

        while(low<=high)

        {

            mid=low+(high-low)/2;

            if(arr[mid]<=x) {

                low=mid+1;

            }

            else {

                high=mid-1;

            }

        }

        return low;

    }

 

    int median(vector<vector<int>> &matrix, int R, int C){

        // code here          

        int low=1,high=2000;

        int comp = ((R*C))/2;

        while(low<=high)

        {

            int mid = low+(high-low)/2;

            int cnt=0;

            for(int i=0;i<R;i++)

            {

                cnt+=smaller(matrix[i],mid);

            }

            if(cnt<=comp) {

                low=mid+1;

            }

            else {

                high=mid-1;

            }

        }

        return low;

    }