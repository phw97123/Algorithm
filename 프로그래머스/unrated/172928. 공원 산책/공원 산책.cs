using System;
using System.Collections.Generic; 
    public class Solution
    {
        public struct Point
        {
            public int x, y;
        }

        Point[] move = new Point[]
        {
            new Point {x = -1, y = 0},
            new Point {x = 1, y = 0},
            new Point {x = 0, y =-1},
            new Point {x = 0, y = 1},
        };

        Dictionary<char, int> mapping = new Dictionary<char, int>() { { 'N', 0 }, { 'S', 1 }, { 'W', 2 }, { 'E', 3 } };

        public int[] solution(string[] park, string[] routes)
        {
            int H = park.Length;
            int W = park[0].Length;

            Point location = new Point();

            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < W; j++)
                {
                    if (park[i][j] == 'S')
                    {
                        location = new Point { x = i, y = j };
                        break;
                    }
                }
            }

            foreach (var route in routes)
            {
                char op = route[0];
                int n = route[2] - '0';

                int nx = location.x;
                int ny = location.y;

                while (n-- > 0)
                {
                    nx += move[mapping[op]].x;
                    ny += move[mapping[op]].y;

                    if ((nx < 0 || H <= nx || ny < 0 || W <= ny) || park[nx][ny] == 'X')
                        break;
                }
                if (n < 0)
                    location = new Point { x = nx, y = ny };
            }
            return new int[] { location.x, location.y };
        }

      
    }
