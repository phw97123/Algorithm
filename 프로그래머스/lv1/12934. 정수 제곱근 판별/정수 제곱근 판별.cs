using System;
public class Solution {
      public long solution(long n)
            {
                long answer = 0;
                if ( n % Math.Sqrt(n) == 0)
                {
                    answer = (long)Math.Sqrt(n)+1;
                    return answer * answer;
                }
                else
                    return -1; 
            }
}