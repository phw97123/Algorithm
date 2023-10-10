using System; 
using System.Linq;

public class Solution {
    public string solution(string s)
 {
     string answer = "";
     int[] nums = s.Split(' ').Select(n=>Convert.ToInt32(n)).ToArray();

     answer += nums.Min();
     answer += ' '; 
     answer += nums.Max(); 

     //for(int i = 0;i<answer.Length; i++)
     //{
     //    Console.WriteLine(answer[i]);
     //}
     return answer;
 }

}