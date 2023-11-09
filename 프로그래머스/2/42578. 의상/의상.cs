using System;
using System.Collections.Generic;

public class Solution {
     public int solution(string[,] clothes)
  {
      int answer = 1;

      Dictionary<string, int> m = new Dictionary<string, int>();

      for (int i = 0; i < clothes.GetLength(0); i++)
      {
          string type = clothes[i, 1];

          if (m.ContainsKey(type))
              m[type]++;
          else
              m[type] = 1;
      }

      foreach (var kvp in m)
      {
          answer *= kvp.Value + 1;
      }

      return answer - 1;
  }

}