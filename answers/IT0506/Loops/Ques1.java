//Author: Ifraah
//Program to find square root of a number
import java.util.Scanner;

public class Ques1 {
	static int Sqr(int x)                            
	{
		if(x==0 || x==1)
			return x;
		int i=1, res=1;
		while(res<=x) {
			i++;
			res=i * i;
		}
		return i-1;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x=sc.nextInt();
		System.out.println(Sqr(x));

	}

}
