class Solution {
  public:
    int findXOR(int l, int r) {
        // complete the function here
        int c=l-1;
        int d=r;
        int e=0,f=0;
        if(c%4==0) f=c;

        else if(c%4==1) f=1;

        else if(c%4==2) f=c+1;

        else f=0;
        
        
        if(d%4==0) e=d;

        else if(d%4==1) e=1;

        else if(d%4==2) e=d+1;

        else e=0;
        return e^f;
    }
};