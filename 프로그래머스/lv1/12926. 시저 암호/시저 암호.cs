public class Solution {
   public string solution(string s, int n)
            {
                string answer = "";
                for (int i = 0; i < s.Length; i++)
                {
                    if (s[i] != ' ')
                    {
                        char c = (char)(s[i] +n);
                        if (char.IsLower(s[i]))
                        {
                            if (c > 'z')
                                c = (char)(c - 26);  
                        }
                        else if (char.IsUpper(s[i]))
                        {
                            if (c > 'Z')
                                c = (char)(c - 26); 
                        }

                        answer += c; 
                    }
                    else
                        answer += ' ';
                }
                
                return answer;
            }
}