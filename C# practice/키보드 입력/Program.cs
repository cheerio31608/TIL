using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            ConsoleKeyInfo keys;
            do
            {
                if (Console.KeyAvailable)
                {
                    keys = Console.ReadKey(true);
                    switch (keys.Key)
                    {
                        case ConsoleKey.UpArrow:
                            Console.WriteLine("윗방향키 입력됨");
                            break;
                        case ConsoleKey.DownArrow:
                            Console.WriteLine("아랫방향키 입력됨");
                            break;
                        case ConsoleKey.LeftArrow:
                            Console.WriteLine("왼쪽방향키 입력됨");
                            break;
                        case ConsoleKey.RightArrow:
                            Console.WriteLine("오른쪽방향키 입력됨");
                            break;
                        case ConsoleKey.Backspace:
                            Console.WriteLine("백스페이스 입력됨");
                            break;
                        case ConsoleKey.B:
                            Console.WriteLine("B키 입력됨");
                            break;
                    }
                }
            } while (true);
        }
    }
}
