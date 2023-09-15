using System;

public class Solution {
    public int solution(int number, int limit, int power)
            {
                int answer = 0;
                int num = 0;

                for (int i = 1; i <= number; i++)
                {
                    for (int j = 1; j <= Math.Sqrt(i); j++)
                    {
                        if (i % j == 0)
                        {
                            if (i / j == j)
                                num++;
                            else
                                num += 2;
                        }
                    }
                    if (num <= limit)
                        answer += num;
                    else
                        answer += power;

                    num = 0; 
                }
                return answer; 
             
            }
}