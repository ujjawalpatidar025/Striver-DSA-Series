class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
         if(n<=1)
         return n;
        int x = log2(n);
        
        return (pow(2,x-1)*x)+(n-pow(2,x)+1)+countSetBits(n-pow(2,x));
    }
};