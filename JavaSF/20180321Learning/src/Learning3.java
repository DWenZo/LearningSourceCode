import java.util.Scanner;

public class Learning3 {
    public static void main(String []args)
    {
        double[] grades = new double[5];
        int i=0;
        Scanner reader = new Scanner(System.in);
        for (i=0;i<5;i++)
        {
            System.out.print("请输入第"+(i+1)+"个学生的成绩：");
            grades[i] = reader.nextDouble();
        }
        double sum = 0;
        for (i=0;i<5;i++)
        {
            sum += grades[i];
        }
        System.out.print("5个学生的平均成绩="+sum/5);
    }
}
