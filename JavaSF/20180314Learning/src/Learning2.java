import java.util.Scanner;

public class Learning2 {
    public static void main(String[] args)
    {
        boolean t;
        byte b;
        short s;
        int i;
        long l;
        float f;
        double d;

        Scanner reader = new Scanner(System.in);
        //INPUT
        t = reader.nextBoolean();
        b = reader.nextByte();
        s = reader.nextShort();
        i = reader.nextInt();
        l = reader.nextLong();
        f = reader.nextFloat();
        d = reader.nextDouble();
        //PROCESS

        //OUTPUT

        System.out.println("boolean变量值为:"+t);
        System.out.println("byte变量值为:"+b);
        System.out.println("short变量值为:"+s);
        System.out.println("int变量值为:"+i);
        System.out.println("long变量值为:"+l);
        System.out.println("float变量值为:"+f);
        System.out.println("double变量值为:"+d);

    }
}
