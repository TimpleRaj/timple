import java.io.*;
import java.util.*;
public class reverse
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
     String s_str = sc.nextLine();
     String res="";
     char[] c_str = s_str.toCharArray();
     int i,j,len=s_str.length();
     for(i=len-1;i>=0;i--)
     {
        res=res+""+c_str[i];
     }
    System.out.println(res);
  }
}
