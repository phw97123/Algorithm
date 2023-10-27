using System;
using System.Collections.Generic;

public class Solution {
      public long[] solution(int n, long left, long right)
  {
      List<long> answer = new List<long>(); 

      long x, y;
      for (long i = left; i <= right; i++)
      {
          x = i / n + 1;
          y = i % n + 1;

          if (x > y)
          {
              answer.Add(x);
          }
          else
              answer.Add(y); 
      }
      return answer.ToArray();
  }
}