public class Solution {
   public string solution(string phone_number)
            {
                string answer;
                char[] phoneArray = phone_number.ToCharArray();

                for(int i = 0; i<phoneArray.Length-4; i++)
                {
                    phoneArray[i] = '*';
                }

                phone_number = new string(phoneArray);
                
                return answer = phone_number;
            }
}