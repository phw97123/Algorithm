public class Solution {
   public string solution(string s)
{
    string answer = "";

    bool cursor = false;
    foreach (var c in s)
    {
        if (c == ' ')
        {
            answer += ' ';
            cursor = false;
        }
        else if (!cursor)
        {
            answer += char.ToUpper(c);
            cursor = true;
        }
        else
            answer += char.ToLower(c); 
    }
    return answer;
}

}