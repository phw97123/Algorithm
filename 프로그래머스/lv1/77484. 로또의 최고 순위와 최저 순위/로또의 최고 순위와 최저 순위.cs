using System;

public class Solution {
 public int[] solution(int[] lottos, int[] win_nums)
            {
                int[] answer = new int[2];
                int zeroCnt = 0;
                int count = 0; 

                for (int i = 0; i < lottos.Length; i++)
                {
                    if (lottos[i] == 0)
                        zeroCnt++;
                    for (int j = 0; j < win_nums.Length; j++)
                    {
                        if (lottos[i] == win_nums[j])
                        {
                            count++; 
                        }
                    }
                }

                int best = 7 - count - zeroCnt;
                int worst = 7 - count;

                if (best < 1) best = 1;
                else if (best > 6) best = 6;
                if (worst > 6) worst = 6;

                answer[0] = best;
                answer[1] = worst; 

                return answer;
            }
}