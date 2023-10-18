public class Solution {
    int Gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return Gcd(b, a % b);
}

int Lcm(int a, int b)
{
    return a * b / Gcd(a, b);
}

public int solution(int[] arr)
{
    int temp = arr[0]; 

    for (int i = 1; i < arr.Length; i++)
    {
        temp = Lcm(temp, arr[i]); 
    }

    return temp; 
}
}