using System;
using System.Collections.Generic;
using System.Linq; 

public class Solution {
      public string[] solution(string[] players, string[] callings)
            {
               var dic = players.Select((s, i) => new { name = s, index = i }).ToDictionary(d => d.name, d => d.index);
                foreach (string call in callings)
                {
                    int rank = dic[call];
                    string overtaken = players[rank - 1];
                    players[rank - 1] = call;
                    players[rank] = overtaken; 
                    dic[call] = rank - 1; dic[overtaken] = rank; 
                }
                return players; 
            }
}