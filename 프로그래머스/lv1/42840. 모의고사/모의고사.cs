using System;
using System.Collections.Generic;
using System.Linq; 

public class Solution {
    public List<int> solution(int[] answers)
            {
                List<int> answer= new List<int>();

                int[][] stus = new int[3][];
                stus[0]= new int[] { 1, 2, 3, 4, 5 };
                stus[1] = new int[] { 2, 1, 2, 3, 2, 4, 2, 5 };
                stus[2] = new int[] { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

                int[] score = { 0, 0, 0 };

                for(int i = 0; i<answers.Length; i++)
                {
                    for(int j = 0; j<score.Length; j++)
                    {
                        if (stus[j][i % stus[j].Length] == answers[i])
                            score[j]++; 
                    }
                        
                }
                for(int i = 0; i<score.Length; i++)
                {
                    if (score[i] == score.Max())
                        answer.Add(i + 1); 
                }

                return answer;
            }
}