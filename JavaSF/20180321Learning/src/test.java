public class test {
    public static void main(String[] args)
    {
        int a=16,b=-16;
        System.out.println(b>>2);
        System.out.println(b<<2);
        System.out.println(b>>>30);   //注意负数以补码形式储存
        System.out.println(a&b);
        System.out.println(a|b);
        System.out.println(a^b);
        System.out.println(++a+b--/b);
        System.out.println((a<b)||(a%b==0)&&!(a/b==-1));

    }
}
