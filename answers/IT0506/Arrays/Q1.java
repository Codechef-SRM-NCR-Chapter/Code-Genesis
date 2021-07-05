import java.util.Scanner;
public class Q1 {

public static void main(String[] args) {
Scanner s = new Scanner(System.in);
int[] a=new int[109];
System.out.print("Enter the size of array(N):");
int n=s.nextInt();
for(int i=0;i<n;i++)
{
a[i]=s.nextInt();
}
System.out.print("target:");
int tg=s.nextInt();


    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<=n-2; j++)
        {
            if((a[i]+a[j+1])==tg)
            { 
                System.out.println("["+i +","+(j+1)+"]");
            }
        }
     }
  }
}