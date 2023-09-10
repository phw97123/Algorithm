using System;

public class Solution {
     public int solution(int[] numbers)
            {
                int count = 0; 
                for(int i = 0; i<numbers.Length; i++)
                {
                    for(int j = i+1;  j<numbers.Length; j++)
                    {
                        for(int k= j+1; k<numbers.Length; k++)
                        {
                            if (numbers[i] + numbers[j] + numbers[k] == 0)
                                count++; 
                        }
                    }
                }
                Console.WriteLine(count); 

                return count; 
            }
}