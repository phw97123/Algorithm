using System;
using System.Collections.Generic;
using System.Linq; 

public class Solution {
     public int[] solution(string[] idList, string[] report, int k)
{
    int[] answer = new int[idList.Length];

    Dictionary<string, int> idIdxDic = new Dictionary<string, int>();

    Dictionary<string, HashSet<string>> reportDic = new Dictionary<string, HashSet<string>>();

    for (int i = 0; i < idList.Length; ++i)
    {
        idIdxDic[idList[i]] = i;
    }

    foreach (string rep in report)
    {
        string[] parts = rep.Split(' ');
        string sender = parts[0];
        string receiver = parts[1];

        if (!reportDic.ContainsKey(receiver))
        {
            reportDic[receiver] = new HashSet<string>();
        }
        reportDic[receiver].Add(sender);
    }

    foreach (var pair in reportDic)
    {
        if (pair.Value.Count >= k)
        {
            foreach (string inIter in pair.Value)
            {
                answer[idIdxDic[inIter]]++;
            }
        }
    }

    return answer;
}

}              