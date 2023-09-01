using System;
using System.Collections.Generic; 

public class Solution {
    public int solution(int n)
        {
            int answer = 0;

            List<int> list = new List<int>();

            int a = 0;

            while (n > 0)
            {
                list.Add(n % 3);
                n = n / 3;
            }

            int num = 0; 

            for (int i = list.Count-1; i>= 0; i--)
            {
                answer +=(int)Math.Pow(3, num++)*list[i];
            }

            return answer;
        }
}