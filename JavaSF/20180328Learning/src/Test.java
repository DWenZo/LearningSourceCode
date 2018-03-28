import java.awt.image.CropImageFilter;

public class Test {


        //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
        public static void main(String[] args)
        {
            Circle circle1 = new Circle(16.0);
            Circle circle2 = new Circle(8.0);
            compareCircle(circle1,circle2);
        }

        static void compareCircle( Circle a,Circle b)
        {
            if (a.getRadius() > b.getRadius()) {
                System.out.println("circle1的半径为" + a.getRadius() + ";circle2的半径为:" + b.getRadius());
                System.out.println("circle1 > circle2");
            }
            else if (a.getRadius() < b.getRadius())
            {
                System.out.println("circle1的半径为" + a.getRadius() + ";circle2的半径为:" + b.getRadius());
                System.out.println("circle1 < circle2");
            }else
            {
                System.out.println("circle1的半径为" + a.getRadius() + ";circle2的半径为:" + b.getRadius());
                System.out.println("circle1 = circle2");
            }
        }
}

class Circle
{
    double radius = 0;
    Circle(){ }
    Circle(double r)
    {
        radius = r;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }
}
