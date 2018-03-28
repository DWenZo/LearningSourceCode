import java.util.Scanner;

public class Learning4 {
    public static void main(String []args)
    {
        Scanner reader = new Scanner(System.in);
        int row = 0;
        System.out.println("请输入要打印的倒三角形的行数：");
        row = reader.nextInt();

        int maxStar = 0;
        int space = 0;

        for (maxStar = 2 * row - 1,space = 0;maxStar >0;maxStar -= 2,space++)
        {
            for (int i=0;i<space;i++)
            {
                System.out.print(" ");          //打出空格
            }
            for (int j=0;j<maxStar;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
