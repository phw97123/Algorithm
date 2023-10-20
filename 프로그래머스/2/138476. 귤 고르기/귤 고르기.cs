using System;
using System.Collections.Generic; 
public class Solution {
   public int solution(int k, int[] tangerine)
{
    int answer = 0;
    int[] count = new int[10000001];

    foreach (int value in tangerine)
    {
        count[value] += 1;
    }

    Array.Sort(count, (a, b) => b.CompareTo(a));

    int i = 0;
    while (k > 0)
    {
        k -= count[i];
        i += 1;
        answer += 1;
    }

    return answer;
}
}