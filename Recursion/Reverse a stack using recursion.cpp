
class Solution{
public:
    void Reverse(stack<int> &st){
        if (st.size() > 0) {
        int x = st.top();
        st.pop();
        Reverse(st);
        insert_at_bottom(st, x);
    }
    return;
        
    }
    
    void insert_at_bottom(stack<int>& st, int x)
    {
 
    if (st.size() == 0) {
        st.push(x);
    }
    else {
 
        int a = st.top();
        st.pop();
        insert_at_bottom(st, x);
        st.push(a);
    }
    }
};