using System;
using System.Collections.Generic; 
using System.Linq; 

public class Solution {
   public int[] solution(int[] numbers)
            {
                int[] answer = new int[] { };
                List<int> nums = new List<int>(); 

                for (int i = 0; i < numbers.Length; i++)
                {
                    for (int j = 0; j < numbers.Length; j++)
                    {
                        if (i != j)
                            nums.Add(numbers[i] + numbers[j]); 
                    }
                   
                }
                nums = nums.Distinct().ToList();
                nums.Sort();
                answer = nums.ToArray();

                foreach (int a in answer)
                    Console.WriteLine(a); 
                return answer;
            }
}