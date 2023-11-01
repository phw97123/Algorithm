using System;
using System.Collections.Generic; 
using System.Linq; 
public class Solution {
          bool CompareDictionaries<TKey, TValue>(Dictionary<TKey, TValue> dict1, Dictionary<TKey, TValue> dict2)
     {
         if (dict1.Count != dict2.Count)
             return false;

         foreach (var pair in dict1)
         {
             if (!dict2.TryGetValue(pair.Key, out var value) || !value.Equals(pair.Value))
                 return false;
         }

         return true;
     }
     public int solution(string[] want, int[] number, string[] discount)
     {

         int answer = 0;

         Dictionary<string, int> wantMap = new Dictionary<string, int>();
         for (int i = 0; i < number.Count(); i++)
             wantMap.Add(want[i], number[i]);

         for (int i = 0; i <= discount.Count() - 10; i++)
         {
             Dictionary<string, int> martDiscount = new Dictionary<string, int>();
             for (int j = i; j < i + 10; j++)
             {
                 if (martDiscount.ContainsKey(discount[j]))
                     martDiscount[discount[j]] += 1;
                 else
                     martDiscount.Add(discount[j], 1);
             }
             if (CompareDictionaries(martDiscount, wantMap))
                 answer++;
         }

         return answer;
     }
}