class Solution {
public:
    int fib(int n) {
       if(n==0)
       return 0;
       else if(n==1)
       return 1;

       int first=0;
       int second=1;
       int x=0;

       for(int i=2; i<=n; i++){
       x=(first+second);
       first=second;
       second=x;
      }
      return x;
    }
};