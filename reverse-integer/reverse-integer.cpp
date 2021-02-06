class Solution {
public:
    int reverse(int x) {
        int y;
      long rev=0;
        while(x!=0)
        {
            y=x%10;
            rev=rev*10+y;
            x=x/10;
            
        }
  if(rev>pow(-2,31)&& rev<(pow(2,31)+1))
      return rev;
        else 
            return 0;
    }
};