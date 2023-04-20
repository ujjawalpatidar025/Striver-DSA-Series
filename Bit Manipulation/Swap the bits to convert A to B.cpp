class Solution {
public:
    int minBitFlips(int start, int goal) {
        int XOR= start^goal;
        int c=0;
       
        while(XOR){
            int bit=1;
            if(bit & XOR){
                c++;
            }
            XOR=XOR>>1;
        }
        return c;
        
    }
};