//BMI指数计算器  2017/8/3  深大的先算一下吧
//体质指数（BMI）=体重（kg）÷身高^2（m）
//把字符串转成 int double long 之类的东西的尝试 or  例子
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpStudySolution
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                double mess, height;
                Console.WriteLine("Please enter your body weight(kg)=");
                string Smess = Console.ReadLine();
                Console.WriteLine("Please enter your body height(m)=");
                string Sheight = Console.ReadLine();
                if (double.TryParse(Smess, out mess) && double.TryParse(Sheight, out height))
                {
                    double BMI = mess / (height * height);
                    Console.WriteLine("Your BMI = " + BMI);
                    if (BMI < 18.5)
                    {
                        Console.WriteLine("Underweight!");
                        break;
                    }else if(BMI < 24){
                        Console.WriteLine("Healthy weight!");
                        break;
                    }else if(BMI < 28)
                    {
                        Console.WriteLine("Overweight!");
                        break;
                    }
                    else
                    {
                        Console.WriteLine("Bbese!");
                        break;
                    }
                }
                else
                {
                    Console.WriteLine("You entered (a) wrong numbers.Please enter again!");
                    Console.Beep(); 
                    continue;
                }
            }
            Console.ReadKey();
        }
    }
}
