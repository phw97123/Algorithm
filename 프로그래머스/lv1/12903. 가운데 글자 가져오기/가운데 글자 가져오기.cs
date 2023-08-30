public class Solution {
   public string solution(string s)
            {
                string answer = "";

                int mid = s.Length/2;
                if (s.Length % 2 != 0)
                    answer = s.Substring(mid, 1);
                else
                    answer = s.Substring(mid - 1, 2); 

                return answer;
            }
}