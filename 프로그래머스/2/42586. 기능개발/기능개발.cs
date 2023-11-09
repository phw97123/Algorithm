using System;
using System.Collections.Generic;

public class Solution {
       public List<int> solution(int[] progresses, int[] speeds)
 {
     List<int> answer = new List<int>();
     int day;
     int max_day = 0;

     for (int i = 0; i< progresses.Length; ++i )
     {
         day = (99 - progresses[i]) / speeds[i] + 1;
         if (answer.Count == 0 || max_day < day)
             answer.Add(1);
         else
         {
             ++answer[answer.Count-1]; 
         }

         if (max_day < day)
             max_day = day; 
     }

     return answer;
 }
}