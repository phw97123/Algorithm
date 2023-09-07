public class Solution {
     public string solution(string s, int n)
            {
                string answer = "";

                for(int i = 0;i<s.Length; i++)
                {
                    char c = s[i];

                    if (char.IsLower(c))
                        c = (char)((c - 'a' + n) % 26 + 'a');

                    else if (char.IsUpper(c))
                        c = (char)((c - 'A' + n) % 26 + 'A');

                    answer += c; 
                }
                return answer;
            }
}