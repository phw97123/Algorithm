using System;

public class Solution {
   public int[] solution(int brown, int yellow)
{
    int[] answer = new int[2];
    int size = brown + yellow; 

    for(int i = 3; i< size/2; i++)
    {
        if (size % i != 0)
            continue; 

        int width = i;
        int height = size / i;

        if (width * 2 + height * 2 - 4 == brown)
        {
            answer[0] = (Math.Max(width, height));
            answer[1] = (Math.Min(width, height));
            break; 
        }
    }
    return answer; 
}

} 