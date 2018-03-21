public class Learning4 {
    public static void main(String[] args)
    {
     //ini
     int[][] YangHuiTriangle =
             {
                     {1},{1,1},{1,2,1}
             };
     //OUTPUT
      int row,col;
      row = col = 0;
      int count=1;
      for (row = 0;row<3;row++)
      {
            for (col = 0;col<count;col++)
            {
                System.out.print(YangHuiTriangle[row][col]+" ");
            }
            System.out.println();
            count++;
      }
    }
}
