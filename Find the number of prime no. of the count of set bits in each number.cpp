class Solution {
  public:
  int binary(int num)
  {
      int count=0;int rem;
      while(num!=0)
      {
          rem=num%2;
          if(rem==1)
          {
              count++;
          }
          num=num/2;
          
      }
      return count;
  }
  int isprime(int n)
  {
      if(n==1)
      {
          return 0;
      }
      for(int i=2;i*i<=n;i++)
      {
          if(n%i==0)
          {
              return 0;
          }
      }
      return 1;
  }
    int primeSetBits(int L, int R){
        // code here
        int c=0;
        for(int i=L;i<=R;i++)
        {
            int M=binary(i);
            if(isprime(M))
            {
                c++;
            }
        }
        return c;
    }
};
