import java.util.Scanner;

public class Replace
{
	public static void main (String[] args)
	{
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();
            s=s.replaceAll("party","pawri");
            System.out.println(s);
        }
	}
}