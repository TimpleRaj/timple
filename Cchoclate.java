import java.io.*;
import java.util.*;

public class Cchoclate
{
  public static void main(String args[])
  {
      Scanner sc = new Scanner(System.in);
      int num_tcase = sc.nextInt(),i,j,cuts;
      int[][] arr = new int[num_tcase][2];
      for(i=0;i<num_tcase;i++)
      {
          for(j=0;j<2;j++)
          {
            arr[i][j]=sc.nextInt();
          }
      }
      for(i=0;i<num_tcase;i++)
      {
        cuts=0;
          for(j=0;j<2;j++)
          {
              if(arr[i][j]!=1)
                cuts+=arr[i][j]-1;
              
          }
          System.out.println(cuts);
     }
      
  }
}
