import java.util.Scanner;

public class Learning1{
    public static void main(String[] args)
    {
        int a,b,c;
        a = b = c =0;
        Scanner reader = new Scanner(System.in);
        //INPUT
        System.out.print("Please enter the first number: a=");
        a = reader.nextInt();
        System.out.print("Please enter the first number: b=");
        b = reader.nextInt();
        System.out.print("Please enter the first number: c=");
        c = reader.nextInt();
        //PROCESS
        System.out.println("Max = "+ max(a,b,c));
        System.out.println("Min = "+ min(a,b,c));
    }

    public static int max(int a,int b,int c)
    {
        if (a >= b)
        {
            if (a >= c)
                return a;
            else
                return c;
        }
        else
        {
            if (b >= c)
                return b;
            else
                return c;
        }
    }
    public static int min(int a,int b,int c)
    {
        if (a <= b)
        {
            if (a <= c)
                return a;
            else
                return c;
        }
        else
        {
            if (b <= c)
                return b;
            else
                return c;
        }
    }
}
