import java.util.Scanner;
public class Calc
{
	public static void main(String[] args){
	Scanner s=new Scanner(System.in);
	int a,b,c;
	char op;
	a=s.nextInt();
	b=s.nextInt();
	op=s.next().charAt(0);
	switch(op){
		case '+':
			c=a+b;
			System.out.println(c);
			break;
		case '-':
			c=a-b;
			System.out.println(c);
			break;
		case '*':
			c=a*b;
			System.out.println(c);
			break;
		case '/':
			c=a/b;
			System.out.println(c);
			break;
	}
}
}