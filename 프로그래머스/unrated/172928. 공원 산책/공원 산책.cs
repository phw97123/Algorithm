using System;
using System.Collections.Generic;

 public class Solution
 {
     Dictionary<char, int> mapping = new Dictionary<char, int>() { { 'N', 0 }, { 'S', 1 }, { 'W', 2 }, { 'E', 3 } };

     public int[] solution(string[] park, string[] routes)
     {
             int[] dx = { -1, 1, 0, 0 };
   int[] dy = { 0, 0, -1, 1 };

         int[] location = new int[2]; 

         int H = park.Length;
         int W = park[0].Length;

         //시작위치 
         for (int i = 0; i < H; i++)
         {
             for (int j = 0; j < W; j++)
             {
                 if (park[i][j] == 'S')
                 {
                     location[0] = i;
                     location[1] = j; 
                     break;
                 }
             }
         }

         foreach (var route in routes)
         {
             char op = route[0];
             int n = route[2] - '0';

             int nx = location[0];
             int ny = location[1];

             while (n-- > 0)
             {
                 nx += dx[mapping[op]];
                 ny += dy[mapping[op]]; 

                 if ((nx < 0 || H <= nx || ny < 0 || W <= ny) || park[nx][ny] == 'X')
                     break;
             }
             if (n < 0)
             {
                 location[0] = nx;
                 location[1] = ny; 
             }
         }
         return location; 
     }
 }