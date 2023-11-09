using System;
using System.Collections.Generic; 
using System.Linq; 

public class Solution {
     public int solution(int[] priorities, int location)
 {
     Queue<int> printer = new Queue<int>();
     List<int> sorted = new List<int>();

     for(int i = 0;i< priorities.Length; i++)
         printer.Enqueue(i);

     while (printer.Count > 0)
     {
         int nowIndex =    printer.Dequeue();
      

         if (priorities[nowIndex] != priorities.Max())
         {
             printer.Enqueue(nowIndex); 
         }
         else
         {
             sorted.Add(nowIndex);
             priorities[nowIndex] = 0; 
         }
     }

     for(int i = 0;i<sorted.Count; i++)
     {
         if (sorted[i] == location)
             return i + 1; 
     }
         return -1; 
 }
}