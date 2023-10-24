using System;

using System.Collections.Generic;

public class Solution {
            public int solution(string s)
         {
             int answer = 0;

             Queue<char> qu = new Queue<char>();

             foreach(char c in s)
             {
                 qu.Enqueue(c);
             }
             Compare(qu); 

             for (int i = 0; i < s.Length; i++)
             {
                 if(Compare(qu))
                 {
                     answer++; 
                 }

                 char c = qu.Dequeue();
                 qu.Enqueue(c);
             }
             Console.WriteLine(answer);  
             return answer;
         }

         bool Compare(Queue<char> qu)
         {
             Stack<char> stk = new Stack<char>();
             int count = 0;

             foreach (char c in qu)
             {
                 if (c == '(' || c == '{' || c == '[')
                     stk.Push(c);
                 else
                 {
                     if (stk.Count == 0 || stk.Peek()
                         == '(' && c != ')' || stk.Peek() == '{' && c != '}' ||
                         stk.Peek() == '[' && c != ']')
                     {
                         return false;
                     }
                     count++;
                     stk.Pop();
                 }
             }
             return stk.Count == 0;
         }
}