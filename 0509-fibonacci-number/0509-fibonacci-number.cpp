class Solution {
public:
   
    
    int fib(int n) {
        int a,b,c;
          int x=n;
        x++;
        a=-1,b=1;
        if (n==1)return 1;
        else if(n==0)return 0;
      
        else 
        {
            while(x)
            {
                c=a+b;
                a=b;
                b=c;
                x--;
            }
            return c;
        }
            
    }
};