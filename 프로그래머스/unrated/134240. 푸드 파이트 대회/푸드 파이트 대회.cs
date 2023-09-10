using System;
using System.Linq; 

public class Solution {
    public string solution(int[] food)
            {
                string answer = "";
                
                for(int i = 1; i<food.Length; i++)
                {
                    int count = food[i] / 2; 
                    for(int j = 0; j<count; j++)
                    {
                        answer += i; 
                    }
                }
                return answer + "0" + new string(answer.Reverse().ToArray());
            }
}