//氪金抽卡程序(随机数应用) 2017/8/3 Thu
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 氪金抽卡程序
{
    class Program
    {
        static void Main(string[] args)
        {
            Random ran = new Random();
            int r = ran.Next(0, 100);   //取值范围是 [0,99] or [0,100)
            string s;
            if (r < 10)
            {
                s = "购买LOL英雄皮肤75%优惠！";
                Console.WriteLine("恭喜你获得了 ： "+s+r);
                Console.Beep(); 
            }
            else if(r < 30)
            {
                s = "购买LOL英雄皮肤50%优惠！";
                Console.WriteLine("恭喜你获得了 ： " + s + r);
                Console.Beep();
            }
            else if(r < 60)
            {
                s = "购买LOL英雄皮肤25%优惠！";
                Console.WriteLine("恭喜你获得了 ： " + s + r );
                Console.Beep();
            }
            else
            {
                s = "你充的钱不够多，快去充钱再抽一次！";
                Console.WriteLine(s+r);
                Console.Beep();
            }
            Console.ReadKey();
        }
    }
}
