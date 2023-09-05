using System;
using System.Collections.Generic; 

public class Solution {
    public int solution(string t, string p)
            {
                int answer = 0;

                List<long> tList = new List<long>(); 

                for (int i = 0;i<t.Length- p.Length+1; i++)
                {
                    tList.Add(long.Parse(t.Substring(i, p.Length))); 
                }
                
                foreach(var a in tList)
                {
                    if (a <= long.Parse(p))
                        answer += 1; 
                }

                return answer;
            }
}