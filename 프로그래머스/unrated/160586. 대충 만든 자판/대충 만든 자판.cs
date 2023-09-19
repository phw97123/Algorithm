using System;

public class Solution
{
    public int[] solution(string[] keymap, string[] targets)
    {
        int[] answer = new int[targets.Length];

        int count = 0;
        for (int i = 0; i < targets.Length; i++)
        {
            foreach (char c in targets[i])
            {
                count = FindMin(keymap, c);

                if (count == -1)
                {
                    answer[i] = -1;
                    break;
                }
                answer[i] += count;
            }
        }
        return answer;
    }

    int FindMin(string[] keymap, char c)
    {
        int min = 9999;
        for (int i = 0; i < keymap.Length; i++)
        {
            int idx = Array.IndexOf(keymap[i].ToCharArray(), c);

            if (idx == -1)
                continue;

            if (min > idx)
                min = idx;
        }
        return min == 9999 ? -1 : min + 1;
    }
}