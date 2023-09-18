using System;

public class Solution {
    public int solution(string s)
            {
                int answer = 0;
                int x =0;
                int notX = 0;
                char word = ' ';
                bool start = true; 

                for(int i = 0;i<s.Length; i++)
                {
                    if(start == true)
                    {
                        word = s[i];
                        x++;
                        start = false; 
                    }
                    else
                    {
                        if (s[i] == word)
                        {
                            x++;
                        }
                        else
                        {
                            notX++; 
                        }
                    }

                    if(x==notX)
                    {
                        answer++;
                        x = 0;
                        notX = 0;
                        start = true; 
                    }
                    if(i == s.Length-1)
                    {
                        if (start == false)
                            answer++; 
                    }
                }
                return answer;
            }
}