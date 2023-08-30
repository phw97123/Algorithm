using System;
using System.Linq; 
public class Solution {
    public int solution(int[] a, int[] b)
            {
                return a.Zip(b, (t1, t2) => t1 * t2).Sum(); 
            }
}