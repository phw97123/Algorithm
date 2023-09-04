public class Solution {
     public string solution(string s)
            {
                string answer = "";
                string[] strArray = s.Split();

                for(int i = 0; i<strArray.Length; i++)
                {
                    for(int j = 0; j < strArray[i].Length; j++)
                    {
                        if (j % 2 == 0 || j == 0)
                            answer += char.ToUpper(strArray[i][j]);
                        else
                            answer += char.ToLower(strArray[i][j]); 
                    }
                    if (i != strArray.Length - 1)
                        answer += " "; 
                }

                return answer; 
            }
}