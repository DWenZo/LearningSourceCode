import java.util.Scanner;

public class Point {
    //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
    double x = 0;
    double y = 0;
    //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
    Point(){ }
    Point(double a,double b)
    {
        x = a;
        y = b;
    }
    //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
    void judge(double x,double y)
    {
        if (x == 0 || y == 0)
            System.out.println("该点不在任何象限");
        else if(x > 0 && y > 0)
            System.out.println("该点在第1象限");
        else if(x < 0 && y > 0)
            System.out.println("该点在第2象限");
        else if(x < 0 && y < 0)
            System.out.println("该点在第3象限");
        else
            System.out.println("该点在第4象限");
    }

    //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
    // main
    public static void main(String[] args)
    {
        Scanner reader = new Scanner(System.in);
        int numbers = 0;
        System.out.print("请输入点的个数 = ");
        numbers = reader.nextInt();
        System.out.println();
        int i = 1;
        while (numbers-- > 0 ) {

            System.out.print("第" + i + "个点的坐标为：");
            double x,y;
            x = reader.nextDouble();
            y = reader.nextDouble();
            Point a = new Point(x,y);
            a.judge(x,y);
            i++;
        }
    }
}
