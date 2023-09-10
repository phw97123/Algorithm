using System;

public class Solution {
     public int solution(string s)
            {
                int answer = 0;
                string[] strArray = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" }; 

                for(int i = 0; i<strArray.Length; i++)
                {
                    if (s.Contains(strArray[i]))
                    {
                        s = s.Replace(strArray[i],i.ToString()); 
                    }
                }
                answer = int.Parse(s); 
                return answer;
            }
}