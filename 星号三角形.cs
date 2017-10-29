using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*                                           *
   *               *               *         **
   **             **              ***        ***
   ***           ***             *****       ****
   ****         ****            *******      ***
   *****       *****           *********     **
                                             *
*/
namespace 星号三角形     //使用for循环（双重循环）打印
{
    class Program
    {
        static void TriangleOne()
        {
            Console.Write("Please enter the height of the triangle:");
            string s = Console.ReadLine();
            int height;
            int.TryParse(s, out height);     //转换类型+判断真假
            string c;
            Console.Write("Please enter a symbol:");
            c = Console.ReadLine();
            //开始for循环 循环嵌套
            for (int i = 1;i <= height; i++)
            {
                for(int j = 1;j <= i;j++)
                {
                    Console.Write(c);
                }
                Console.WriteLine();
            }
        }
        //============
        static void TriangleTwo()
        {
            Console.Write("Please enter the height of the triangle:");
            string s = Console.ReadLine();
            int height;
            int.TryParse(s, out height);
            string c;
            Console.Write("Please enter a symbol:");
            c = Console.ReadLine();
            //----------------------------------------------------------------------
            //开始for循环
            for (int i = 1;i <= height; i++)
            {
                for (int j = 1;j <= (height - i);j++)
                {
                    Console.Write(" ");      //打出空格
                }
                for(int k = 1;k <= i;k++)
                {
                    Console.Write(c);        //打出组成三角形的符号
                }
                Console.WriteLine();         //换行
            }
        }
        //============
        static void TriangleThree()
        {

        }
        //============
        static void TriangleFour()
        {

        }
        //============
        //-------------------------------------------------------------------------
        //主程序
        static void Main(string[] args)
        {
            //TriangleOne();
            //Console.WriteLine();       //调用函数
            TriangleTwo();
            Console.WriteLine();
            /*TriangleThree();
            Console.WriteLine();
            TriangleFour();   */
            Console.ReadKey();
        }
    }
}
