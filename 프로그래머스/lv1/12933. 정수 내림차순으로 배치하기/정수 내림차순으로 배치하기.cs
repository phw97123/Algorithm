public class Solution {
     public long solution(long n)
            {
                long answer = 0;

                string str = n.ToString();
                char[] chars = str.ToCharArray();
                System.Array.Sort(chars); 
                System.Array.Reverse(chars);

                str = null; 
                for(int i = 0; i< chars.Length; i++)
                {
                    str += chars[i]; 
                }

                answer = long.Parse(str);
                 
                return answer;
     }
}