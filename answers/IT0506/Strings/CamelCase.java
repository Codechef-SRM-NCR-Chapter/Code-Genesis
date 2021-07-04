import java.util.Scanner;
public class CamelCase
{

static int countWords(String str)
{
	int count = 1;

	for (int i = 1; i < str.length() - 1; i++) {
		if (str.charAt(i)>=65&&str.charAt(i)<=90)
			count++;
	}

	return count;
}


public static void main(String args[])
{
	Scanner sc=new Scanner(System.in);
	String str = sc.nextLine();

	System.out.print( countWords(str));

}
}
//contributed by Arnab Kundu
