void insert(int x,stack<int>&s)
{
    if(s.size()==0 || s.top()<x)
    {
        s.push(x);
    }
    else
    {
        int a=s.top();
        s.pop();
        insert(x,s);
        s.push(a);
    }
}
void reverse(stack<int>&s)
{
    if(s.size()>0)
  {
      int c=s.top();
      s.pop();
      reverse(s);
      insert(c,s); 
}
}
void SortedStack :: sort()
{
   //Your code her
  
   reverse(s);
   
}