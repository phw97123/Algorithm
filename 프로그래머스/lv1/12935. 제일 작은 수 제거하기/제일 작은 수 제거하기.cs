using System.Collections.Generic; 
using System.Linq; 
public class Solution {
    public List<int> solution(int[] arr)
            {
                List<int> answer = new List<int> ();

                 if (arr.Length == 1)
                {
                    answer.Add(-1);
                }
                else
                {
                    answer.AddRange(arr);
                    answer.Remove(arr.Min(x => x));

                }
                return answer;
            }
}