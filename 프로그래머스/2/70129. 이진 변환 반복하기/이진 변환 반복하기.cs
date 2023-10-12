using System;

public class Solution {
    public int[] solution(string s)
 {
     int[] answer = new int[2];
     int zero = 0, round = 0;
     while (s != "1")
     {
         string temp = "";
         round++;
         for (int i = 0; i < s.Length; i++)
         {
             if (s[i] == '0')
                 zero++;
             else
                 temp += "1";
         }

         int num = temp.Length;
         s = "";
         s += Convert.ToString(num, 2);
     }

     answer[0] = round;
     answer[1] = zero;
     return answer;
 }
}