class Solution {
public:
    int fib(int n) {
        int first=0;
       int second=1;
       int x=0;

       if(n==0)
       return first;

       else if(n==1)
       return second;

       for(int i=2; i<=n; i++){
       x=(first+second);
       first=second;
       second=x;
      }
      return x;
    }
};