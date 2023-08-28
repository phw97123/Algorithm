using System; 
public class Solution {
        public string solution(string[] seoul)
            {
                int answer = 0;

                answer = Array.FindIndex(seoul, i => i == "Kim");
                return $"김서방은 {answer}에 있다"; 
            }
}