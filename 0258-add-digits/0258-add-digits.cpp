class Solution {
public:
    int addDigits(int x) {

    int a=0;
    int d,r;
  while(x!=0)
  {
      
      
      d=x/10;
      if(d==0)
      {
          break;
      }
      else
      {
    r=x%10;
    x=d+r;
    a=a+x;
      a=x;
      
      }
  }
  
  return x;
    }
    };