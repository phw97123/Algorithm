using System;

public class Solution {
    public int solution(int[] numbers)
            {
                int answer = 0;
                int n = numbers.Length;
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        for (int k = j + 1; k < n; k++)
                        {
                            if (numbers[i] + numbers[j] + numbers[k] == 0)
                            {
                                answer++;
                            }
                        }
                    }

                }
                return answer;
            }
}