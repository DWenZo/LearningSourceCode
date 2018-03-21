import java.util.Scanner;

public class Learning3 {
    public static void main(String[] args)
    {
        //ini
        int i = 0;
        int[] a = {1,2,3};
        int[] b = new int[3];
        for(i=0;i<3;i++)
        {
            b[i] = i+4;
        }
        int[] c = new int[3];

        Scanner reader = new Scanner(System.in);
        //INPUT
        for(i=0;i<3;i++)
        {
            c[i] = reader.nextInt();
        }

        //OUTPUT
        System.out.print("a[0]="+a[0]+",");
        System.out.print("a[1]="+a[1]+",");
        System.out.println("a[2]="+a[2]);

        System.out.print("b[0]="+b[0]+",");
        System.out.print("b[1]="+b[1]+",");
        System.out.println("b[2]="+b[2]);

        System.out.print("c[0]="+c[0]+",");
        System.out.print("c[1]="+c[1]+",");
        System.out.println("c[2]="+c[2]);
    }
}
