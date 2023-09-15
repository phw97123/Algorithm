
  using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class Solution {
    public string solution(string X, string Y)
    {
        var charCountX = X.GroupBy(c => c).ToDictionary(g => g.Key, g => g.Count());
        var charCountY = Y.GroupBy(c => c).ToDictionary(g => g.Key, g => g.Count());

        var commonChars = new List<char>();

        foreach (char c in X)
        {
            if (charCountY.ContainsKey(c) && charCountY[c] > 0)
            {
                commonChars.Add(c);
                charCountY[c]--;
            }
        }

        if (commonChars.Count == 0)
            return "-1";

        if (commonChars.All(c => c == '0'))
            return "0";

        commonChars.Sort();
        commonChars.Reverse();

        var result = new StringBuilder();
        foreach (char c in commonChars)
        {
            result.Append(c);
        }

        return result.ToString();
    }
}

