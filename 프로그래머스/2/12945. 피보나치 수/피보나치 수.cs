public class Solution {
    int[] fibo = new int[100001];
 int Fibonacci(int n)
 {
     if (n <= 1) return n;
     if (fibo[n] > 0) return fibo[n];
     fibo[n] = (Fibonacci(n - 1) + Fibonacci(n - 2)) % 1234567;
     return fibo[n];
 }

 public int solution(int n)
 {
     fibo[0] = 0; 
     fibo[1] = 1; 
     return Fibonacci(n);
 }
}