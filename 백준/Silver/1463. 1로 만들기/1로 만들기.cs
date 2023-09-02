
    using System; 
    public  class DP
    {
        static void Main(string[] arge)
        {
            int n = int.Parse(Console.ReadLine());
            int[] d = new int[n+1];

            d[1] = 0; // 1로 만들기 위한 횟수는 1
            
            for(int i = 2; i<= n; i++)
            {
                d[i] = d[i - 1] + 1;
                if (i % 2 == 0) d[i] = Math.Min(d[i],d[i / 2] + 1);
                if (i % 3 == 0) d[i] = Math.Min(d[i], d[i / 3] + 1); 
            }
            Console.WriteLine(d[n]);
        }
       
    }