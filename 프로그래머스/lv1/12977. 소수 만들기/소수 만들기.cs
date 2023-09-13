using System;

class Solution
{
     public int solution(int[] nums)
            {
                int answer = 0;

                for (int i = 0; i < nums.Length - 2; ++i)
                {
                    for (int j = i + 1; j < nums.Length - 1; ++j)
                    {
                        for (int k = j + 1; k < nums.Length; ++k)
                        {
                            int sum = nums[i] + nums[j] + nums[k];
                            if (IsPrime(sum))
                            {
                                answer++;
                            }
                        }
                    }
                }

                return answer;
            }


            public bool IsPrime(int n)
            {
                bool isBool = true; 
                for (int i = 2; i <= n / 2; i++)
                {
                    if (n % i == 0)
                    {
                        isBool = false;
                        break;
                    }
                        
                }
                return isBool; 
            }
}