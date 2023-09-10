using System;
using System.Collections.Generic; 

public class Solution {
   public List<int> solution(int[] array, int[,] commands)
            {
                List<int> answer = new List<int>();
                
                for (int i = 0; i<commands.GetLength(0); i++)
                {
                    List<int> ints = new List<int>();

                    int target = commands[i,2];
                    
                    for(int j = commands[i,0]; j <=commands[i,1]; j++)
                    {
                        ints.Add(array[j-1]); 
                    }

                    ints.Sort();
                    answer.Add(ints[target-1]);
                }

                return answer;
            }
}