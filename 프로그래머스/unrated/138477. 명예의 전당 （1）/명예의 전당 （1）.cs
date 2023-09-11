using System;
using System.Collections.Generic; 
using System.Linq; 

public class Solution {
    public List<int> solution(int k, int[] score)
            {
                List<int> answer = new List<int>();
                List<int> honor = new List<int>();

                for (int i = 0; i < score.Length; i++)
                {
                    honor.Add(score[i]);
                    honor.Sort();

                    if (i < k)
                    {
                        answer.Add(honor.Min());
                    }
                    else
                    {
                        answer.Add(honor[honor.Count() - k]);
                    }
                }     
                return answer; 
            }
}