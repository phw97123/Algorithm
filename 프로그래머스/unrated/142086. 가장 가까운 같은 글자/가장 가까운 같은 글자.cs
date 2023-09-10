using System;

public class Solution {
        public int[] solution(string s)
            {
                int len = s.Length;
                int[] answer = new int[len];
                int index = -1;

                for (int i = 0; i<s.Length; i++)
                {
                    index = -1;
                    for (int j = i-1; j>= 0; j--)
                    {
                        if (s[i] == s[j])
                        {
                            index = i-j;
                            break; 
                        }
                    }
                    answer[i] = index;
                }

                foreach (int a in answer)
                    Console.WriteLine(a); 
                return answer;
            }
}