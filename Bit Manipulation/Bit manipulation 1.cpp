class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
         int mask=1<<(i-1);
        cout<< bool(num & mask) <<" "<<(num | mask)<<" "<<(~mask & num);
    }
};