//OOP
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RoundBattleI
{
    public class role
    {
        public int HP;
        public int ATK;
        public int DEF;
        public int MP;
        public role() { }
        public role(int _hp, int _mp, int _attack, int _defence)
        {
            HP = _hp;
            ATK = _attack;
            DEF = _defence;
            MP = _mp;
        }
    }
    public class weapon
    {
        public int sword = 7;
    }

   
    //---------------------------------------------------------------------------------------------------
    class Program
    {
        static void Main(string[] args)
        {
            role Player = new role();
            role[] Monster = new role[5];
            Monster[0] = new role(200, 0, 5, 8);
            weapon w;
            Player.HP = 100;
            Player.MP = 0;
            Player.ATK = 2 + w.sword;
            Console.WriteLine(w.sword);
            Console.ReadKey();
        }
    }
}
