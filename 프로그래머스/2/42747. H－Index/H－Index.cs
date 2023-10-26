using System;

public class Solution {
    public int solution(int[] citations)
{
     int answer = 0;
 Array.Sort(citations);
 Array.Reverse(citations);
 int i = 0;
 for (i = 0; i < citations.Length; i++)
 {

     if (citations[i] == 0)
     {
         return 0;
     }
     else if (citations[i] <= i)
     {
         return i;
     }

 }

 return answer = i;
}
}