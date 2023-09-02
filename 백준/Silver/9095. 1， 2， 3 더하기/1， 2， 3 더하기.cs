   using System; 
    public  class DP
    {
        static void Main(string[] arge)
        {
            int n = int.Parse(Console.ReadLine()); 
            for(int i = 0; i<n; i++)
            {
                int num = int.Parse(Console.ReadLine());
                int[] d = new int[20]; 

                d[1] = 1;
                d[2] = 2; 
                d[3] = 4;

                for(int k = 4; k<=num; k++)
                {
                    d[k] = d[k - 1] + d[k - 2] + d[k - 3]; 
                }
                Console.WriteLine(d[num]); 
            }
        }
       
    }