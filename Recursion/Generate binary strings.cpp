class Solution{
public:
   vector<string> res;
    void solve(int n, string op)
    {
        if(n==0){
            cout<<op<<" ";
            return ;
        }
        solve(n-1, op+'0');
        if(op.back() != '1'){
            solve(n-1, op+"1");
        }
    }
    void generateBinaryStrings(int num){
        solve(num, "");
    }
};