import java.util.Scanner;

public class test2 {
    public static void main(String []args)
    {
        final int lowerLimit = 50;
        final int upperLimit = 100;
        for (int i = lowerLimit;i <=upperLimit;i++)
        {
            if (isPrime(i))
                System.out.print(i+" ");
        }
        System.out.println();
    }

    static boolean isPrime(int n)
    {
        for (int i=2;i<n;i++)
        {
            if (n%i == 0)
                return false;
        }
        return true;
    }
}
