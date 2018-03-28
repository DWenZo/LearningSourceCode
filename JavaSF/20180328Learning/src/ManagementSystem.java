import java.util.Scanner;

public class ManagementSystem {
    public static void main(String[]args)
    {
        Scanner reader = new Scanner(System.in);
        student[] stu = new student[4];
        int i = 0;
        int age = 0;
        double score = 0;
        //remember to initialize each Object !!!
        for (i = 0; i<stu.length;i++)
        {
            stu[i] = new student();
        }
        for (i = 0; i<stu.length;i++)
        {
            System.out.print("请输入第"+(i+1)+"个学生的年龄和分数：");
            age = reader.nextInt();
            score = reader.nextDouble();
            stu[i].setAge(age);
            stu[i].setScore(score);
        }
        //All students' age add 1
        for (i = 0;i <stu.length;i++)
        {
            stu[i].ageIncreased();
        }

        //show students info
        for (i=0;i<stu.length;i++)
        {
            stu[i].showStudentInfo(i+1);
//            System.out.println("第"+(i+1)+"个学生的信息：年龄："+stu[i].getAge()+"；成绩："+stu[i].getScore());
        }

        //score > 80
        int count = 0;
        for (i = 0,count = 0;i < stu.length;i++)
        {
            if (stu[i].ifGreaterThan80())
                count++;
        }
        System.out.println("Java成绩高于80的人数有："+count);
    }
}

class student
{
    static int studentNumber = 0;
    static int socreGreaterThan80 = 0;
    int age = 0;
    double score = 0;

    student(){
        studentNumber++;
    }
    student(int age,double score){
        this.age = age;
        this.score = score;
        studentNumber++;
        if(ifGreaterThan80in(score))
            socreGreaterThan80++;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setScore(double score) {
        this.score = score;
    }

    public double getScore() {
        return score;
    }

    public int getAge() {
        return age;
    }

    void ageIncreased()
    {
        age++;
    }
    void showStudentInfo(int i)
    {
        System.out.println("第"+i+"学生的信息：年龄："+age+"；成绩："+score);
    }

    public static int getSocreGreaterThan80() {
        return socreGreaterThan80;
    }

    boolean ifGreaterThan80()
    {
        if (score >= 80)
            return true;
        return false;
    }
    static boolean ifGreaterThan80in(double score)
    {
        if (score >= 80)
            return true;
        return false;
    }

}