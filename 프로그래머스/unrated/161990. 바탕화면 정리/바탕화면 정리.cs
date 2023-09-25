using System;

public class Solution {
     public int[] solution(string[] wallpaper)
            {
                int[] answer = new int[4];
                int minRow = 51;
                int maxRow = 0;
                int minColumn = 51;
                int maxColumn = 0; 

                for(int i = 0;i<wallpaper.Length; i++)
                {
                    for(int j =0; j < wallpaper[i].Length; j++)
                    {
                        if (wallpaper[i][j].Equals('#'))
                        {
                            minRow = minRow > i ? i : minRow;
                            maxRow = maxRow < i ? i : maxRow;
                            minColumn = minColumn > j ? j : minColumn;
                            maxColumn = maxColumn < j ? j : maxColumn;
                        }
                    }
                }

                answer[0] = minRow;
                answer[1] = minColumn;
                answer[2] = maxRow+1;
                answer[3] = maxColumn+1;

                foreach(int i in answer)
                    Console.Write(i); 
                return answer;
            }
}