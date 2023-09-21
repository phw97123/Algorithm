using System;
using System.Collections.Generic; 

public class Solution {
    public int solution(int[] ingredient)
            {
                int answer = 0;
                List<int> temp = new List<int>(); 
                foreach(int buger in ingredient)
                {
                    temp.Add(buger); 
                    if(temp.Count >= 4)
                    {
                        if (temp[temp.Count-4] == 1 && temp[temp.Count - 3] == 2 && temp[temp.Count - 2] ==  3 && temp[temp.Count - 1] == 1 )
                        {
                            answer++;
                            temp.RemoveRange(temp.Count - 4, 4);
                        }
                    }
                }
                return answer;
            }
}