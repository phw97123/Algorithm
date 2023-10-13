public class Solution {
    public int solution(int n)
{
    const int MAX =  100001;
    int[] fibo = new int[MAX];

    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i<= n; i++)
    {
        fibo[i] = (fibo[i-1] + fibo[i-2]) % 1234567; 
    }
    int answer =fibo[n]; 

    return answer;
}
}