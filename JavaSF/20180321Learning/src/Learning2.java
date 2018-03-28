public class Learning2 {
    public static void main(String[] args)
    {
        final int upperLimit = 100;
        final int lowerLimit = 1;
        int i = lowerLimit;
        int counter = 0;
        //do while circulation

        do {
            if (i%3 == 0)
            {
                if (i%7 == 0)
                    counter++;
            }
            i++;
        }while(i <= upperLimit);
        System.out.println("do while 循环: "+counter);
        //while circulation
        i = lowerLimit;
        counter = 0;
        while (i <= upperLimit)
        {
            if (i%3 == 0)
            {
                if (i%7 == 0)
                    counter++;
            }
            i++;
        }
        System.out.println("while 循环: "+counter);
        //for circulation
        for (i = lowerLimit,counter=0;i <= upperLimit;i++)
        {
            if (i%3 == 0) {
                if (i % 7 == 0)
                    counter++;
            }
        }
        System.out.println("for 循环: "+counter);
    }
}
