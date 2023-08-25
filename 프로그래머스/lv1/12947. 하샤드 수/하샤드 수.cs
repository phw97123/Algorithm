public class Solution {
   public bool solution(int x)
            {
                bool answer = true;

                int a = x; 
                int num = 0; 

                while(a != 0)
                {
                    num += a % 10;

                    a /= 10;
                }

                if (x % num == 0)
                    answer = true;
                else
                    answer = false;

                return answer;
            }
}