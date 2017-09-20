import java.io.*;
import java.util.*;
public class CNumOne {

  public static void main(String args[])
  {
      Scanner sc = new Scanner(System.in);
    int n = sc.nextInt(),i,j,len,tmp;
    int[][] inp = new int[n][2];
    for(i=0;i<n;i++)
    {
        inp[i][0] = sc.nextInt();
        inp[i][1] = 0;
        String bin = Integer.toBinaryString(inp[i][0]);
        char[] bits = bin.toCharArray();
        len=bits.length;
        for(j=0;j<len;j++)
        {
            if(bits[j]=='1')
                inp[i][1]++;
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(inp[i][1]<inp[j][1])
            {
                tmp=inp[i][1];
                inp[i][1]=inp[j][1];
                inp[j][1]=tmp;

                tmp=inp[i][0];
                inp[i][0]=inp[j][0];
                inp[j][0]=tmp;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        System.out.println(inp[i][0]+" "+Integer.toBinaryString(inp[i][0]));
    }
    
  }
}
