using System;
using System.Linq; 

public class Solution {
   public int solution(int n, int[] lost, int[] reserve)
            {
       
       
                int answer = 0;

                for (int i = 0; i < reserve.Length; i++)
                {
                    for (int j = 0; j < lost.Length; j++)
                    {
                        if (reserve[i] == lost[j])
                        {
                            reserve[i] = -1;
                            lost[j] = -1; 
                        }
                    }
                }
       
         Array.Sort(lost);
                Array.Sort(reserve); 

                for (int i = 0; i < reserve.Length; i++)
                {
                    for (int j = 0; j < lost.Length; j++)
                    {
                        if ((reserve[i] != -1 || reserve[i] != -1)&&reserve[i] == lost[j] - 1 || reserve[i] == lost[j] + 1)
                        {
                            reserve[i] = -1;
                            lost[j] = -1;
                        }
                    }
                }

             int[] newLost = lost.Where(num => num != -1).ToArray();

                answer = n - newLost.Length;
                return answer;
            }
   }